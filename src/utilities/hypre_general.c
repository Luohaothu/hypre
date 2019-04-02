/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision$
 ***********************************************************************EHEADER*/

#include "_hypre_utilities.h"
#include "../seq_mv/csr_sparse_device.h"

#if defined(HYPRE_USING_KOKKOS)
#include <Kokkos_Core.hpp>
#endif

/******************************************************************************
 *
 * hypre initialization
 *
 *****************************************************************************/

void
HYPRE_Init( hypre_int argc, char *argv[] )
{
   /*
   HYPRE_Int  num_procs, myid;

   hypre_MPI_Comm_size(hypre_MPI_COMM_WORLD, &num_procs);
   hypre_MPI_Comm_rank(hypre_MPI_COMM_WORLD, &myid);
   */
#if defined(HYPRE_USING_KOKKOS)
   /*
   Kokkos::InitArguments args;
   args.num_threads = 10;
   Kokkos::initialize (args);
   */
   Kokkos::initialize (argc, argv);
#endif

#if !defined(HYPRE_USING_RAJA) && !defined(HYPRE_USING_KOKKOS) && defined(HYPRE_USING_CUDA)
   /*
   if (!cuda_reduce_buffer)
   {
      cuda_reduce_buffer = hypre_TAlloc(HYPRE_double6, 1024, HYPRE_MEMORY_DEVICE);
   }
   */
#endif

#if defined(HYPRE_USING_UNIFIED_MEMORY)
   hypre_GPUInit(-1);
#endif

   /* hypre_InitMemoryDebug(myid); */

#if defined(HYPRE_USING_DEVICE_OPENMP)
   /*
   hypre__offload_device_num = omp_get_initial_device();
   hypre__offload_host_num   = omp_get_initial_device();
   */
   HYPRE_OMPOffloadOn();
#endif

#if defined(HYPRE_USING_CUDA)
   hypre_device_sparse_opts = hypre_TAlloc(hypre_DeviceCSRSparseOpts, 1, HYPRE_MEMORY_HOST);
   hypre_device_sparse_opts->rownnz_estimate_method      = 3; /* 1: naive overestimate
                                                                 2: naive underestimate
                                                                 3: Cohen's algorithm */
   hypre_device_sparse_opts->spgemm_num_passes           = 3;
   hypre_device_sparse_opts->rownnz_estimate_nsamples    = 32;
   hypre_device_sparse_opts->rownnz_estimate_mult_factor = 1.5;
   hypre_device_sparse_opts->hash_type                   = 'L';
   hypre_device_sparse_opts->do_timing                   = 0;
   hypre_device_sparse_opts->use_cusparse_spgemm         = 0;

   hypre_device_sparse_handle = hypre_DeviceCSRSparseHandleCreate(hypre_device_sparse_opts);
#endif
}

/******************************************************************************
 *
 * hypre finalization
 *
 *****************************************************************************/

/* declared in "struct_communication.c" */
extern HYPRE_Complex *global_recv_buffer, *global_send_buffer;
extern HYPRE_Int      global_recv_size, global_send_size;

void
HYPRE_Finalize()
{
#if defined(HYPRE_USING_UNIFIED_MEMORY)
   hypre_GPUFinalize();
#endif

#if defined(HYPRE_USING_KOKKOS)
   Kokkos::finalize ();
#endif

#if !defined(HYPRE_USING_RAJA) && !defined(HYPRE_USING_KOKKOS) && defined(HYPRE_USING_CUDA)
   hypre_TFree(cuda_reduce_buffer, HYPRE_MEMORY_DEVICE);
#endif

   hypre_TFree(global_send_buffer, HYPRE_MEMORY_DEVICE);
   hypre_TFree(global_recv_buffer, HYPRE_MEMORY_DEVICE);

#if defined(HYPRE_USING_CUDA)
   hypre_TFree(hypre_device_sparse_opts, HYPRE_MEMORY_HOST);
   hypre_DeviceCSRSparseHandleDestroy(hypre_device_sparse_handle);
#endif
}

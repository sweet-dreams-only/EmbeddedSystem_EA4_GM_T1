/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vctr Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vctr Informatik GmbH.
 *                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vctr Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_VehSigCdng_Type.h
 *     SW-C Type:  VehSigCdng
 *  Generated at:  Thu Jun  2 12:16:48 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_VEHSIGCDNG_TYPE_H
# define _RTE_VEHSIGCDNG_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define A1_LowerLimit (-10.0)
# define A1_UpperLimit (10.0)

# define A2_LowerLimit (-180.0)
# define A2_UpperLimit (180.0)

# define A3_LowerLimit (-50.0)
# define A3_UpperLimit (50.0)

# define A4_LowerLimit (0.1)
# define A4_UpperLimit (10.0)

# define A5_LowerLimit (0.1)
# define A5_UpperLimit (10.0)

# define Frq10_LowerLimit (1.0)
# define Frq10_UpperLimit (100.0)

# define Rate10_LowerLimit (1.0)
# define Rate10_UpperLimit (1200.0)

# define Rate5_LowerLimit (-120.0)
# define Rate5_UpperLimit (120.0)

# define Rate6_LowerLimit (0.1)
# define Rate6_UpperLimit (400.0)

# define Rate7_LowerLimit (0.1)
# define Rate7_UpperLimit (500.0)

# define Rate8_LowerLimit (1.0)
# define Rate8_UpperLimit (50.0)

# define Rate9_LowerLimit (0.1)
# define Rate9_UpperLimit (120.0)

# define Spd1_LowerLimit (0.0)
# define Spd1_UpperLimit (511.0)

# define Spd4_LowerLimit (0.1)
# define Spd4_UpperLimit (511.0)

# define Uls5_LowerLimit (-1000000000.0)
# define Uls5_UpperLimit (1000000000.0)

# define Cnt16_LowerLimit (0U)
# define Cnt16_UpperLimit (65535U)


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1464879054
#    error "The magic number of the generated file <C:/Component/SF033A_VehSigCdng_Impl/tools/contract/Rte_VehSigCdng_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1464879054
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_VEHSIGCDNG_TYPE_H */

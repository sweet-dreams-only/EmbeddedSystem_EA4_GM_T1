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
 *          File:  Rte_MotRefMdl_Type.h
 *     SW-C Type:  MotRefMdl
 *  Generated at:  Tue Jun 21 14:35:21 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NXTR", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nxtr Automotive Corporation
 *
 *   Description:  Application types header file for SW-C (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTREFMDL_TYPE_H
# define _RTE_MOTREFMDL_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range and Enumeration Definitions
 *********************************************************************************************************************/

# define Ag10_LowerLimit (0)
# define Ag10_UpperLimit (6.2832)

# define Ag13_LowerLimit (0.001)
# define Ag13_UpperLimit (0.1)

# define Ag14_LowerLimit (-3.1415927)
# define Ag14_UpperLimit (3.1415927)

# define Curr6_LowerLimit (0.0)
# define Curr6_UpperLimit (200.0)

# define Curr7_LowerLimit (-200)
# define Curr7_UpperLimit (200)

# define Curr9_LowerLimit (0.01)
# define Curr9_UpperLimit (20.0)

# define CurrSqd1_LowerLimit (0.0)
# define CurrSqd1_UpperLimit (40000.0)

# define Frq2_LowerLimit (1.0)
# define Frq2_UpperLimit (200.0)

# define Indu1_LowerLimit (0.00003)
# define Indu1_UpperLimit (0.00041)

# define Indu2_LowerLimit (0.0)
# define Indu2_UpperLimit (0.0023)

# define MotCon1_LowerLimit (0.025)
# define MotCon1_UpperLimit (0.075)

# define R5_LowerLimit (0.005)
# define R5_UpperLimit (0.125)

# define R7_LowerLimit (-0.5)
# define R7_UpperLimit (0.5)

# define Ti12_LowerLimit (0.0)
# define Ti12_UpperLimit (0.05)

# define Tq1_LowerLimit (-8.8)
# define Tq1_UpperLimit (8.8)

# define Uls12_LowerLimit (-1.0)
# define Uls12_UpperLimit (1.0)

# define Uls13_LowerLimit (-100.0)
# define Uls13_UpperLimit (100.0)

# define Uls14_LowerLimit (1.0)
# define Uls14_UpperLimit (2.0)

# define Uls2_LowerLimit (0.0)
# define Uls2_UpperLimit (1.0)

# define Uls9_LowerLimit (0.98)
# define Uls9_UpperLimit (1)

# define Vel1_LowerLimit (-1350)
# define Vel1_UpperLimit (1350.0)

# define Volt1_LowerLimit (6.0)
# define Volt1_UpperLimit (26.5)

# define Volt17_LowerLimit (-26.5)
# define Volt17_UpperLimit (26.5)

# define Vel4_LowerLimit (0U)
# define Vel4_UpperLimit (43200U)

# define Uls15_LowerLimit (0U)
# define Uls15_UpperLimit (0U)

# define Volt18_LowerLimit (0U)
# define Volt18_UpperLimit (40960U)

# define Tq13_LowerLimit (0U)
# define Tq13_UpperLimit (0U)

# define Cnt14_LowerLimit (2U)
# define Cnt14_UpperLimit (12U)

# define Cnt19_LowerLimit (0U)
# define Cnt19_UpperLimit (255U)

# define Cnt28_LowerLimit (1U)
# define Cnt28_UpperLimit (5U)

# define Cnt29_LowerLimit (1U)
# define Cnt29_UpperLimit (20U)

# ifndef MOTQUAD_QUAD1
#  define MOTQUAD_QUAD1 (1U)
# endif

# ifndef MOTQUAD_QUAD2
#  define MOTQUAD_QUAD2 (2U)
# endif

# ifndef MOTQUAD_QUAD3
#  define MOTQUAD_QUAD3 (3U)
# endif

# ifndef MOTQUAD_QUAD4
#  define MOTQUAD_QUAD4 (4U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1466536980
#    error "The magic number of the generated file <C:/Component/SF103A_MotRefMdl_Impl/tools/contract/Rte_MotRefMdl_Type.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1466536980
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTREFMDL_TYPE_H */

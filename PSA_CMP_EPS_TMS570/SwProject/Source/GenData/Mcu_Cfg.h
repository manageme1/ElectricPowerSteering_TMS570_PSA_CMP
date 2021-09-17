/**********************************************************************************************************************
*  COPYRIGHT
*  ********************************************************************************************************************
*  Copyright (c) by Vector Informatik GmbH.                                                        All rights reserved.
*
*                This software is copyright protected and proprietary to Vector Informatik GmbH.
*                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
*                All other rights remain with Vector Informatik GmbH.
*
***********************************************************************************************************************


***********************************************************************************************************************
*  FILE DESCRIPTION
*  ********************************************************************************************************************
*  File:       Mcu_Cfg.h
*  Project:    DrvMcu_Tms570Tigcm01Asr
*  Module:     Mcu
**********************************************************************************************************************/

/**********************************************************************************************************************
*  Project  :  EPS.ecuc
*  Generated:  2014-01-31 04:28 pm
*  Licensee :  Vector AUTOSAR Basic Software (MICROSAR)
 
    This file is generated by DaVinci Configurator Base - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
**********************************************************************************************************************/

/**********************************************************************************************************************
*  AUTHOR IDENTITY
*  ********************************************************************************************************************
*  Name                          Initials      Company
*  ********************************************************************************************************************
*  Roger Engoulou                Are           Vector Informatik GmbH
*  Christoph Ederer              Cer           Vector Informatik GmbH
*  ClaudiaMausz                  Mz            Vector Informatik GmbH
*  Mihai Olariu                  Ou            Vector Informatik GmbH
*  ********************************************************************************************************************
*  REVISION HISTORY
*  ********************************************************************************************************************
*  Version   Date        Author  Change Id     Description
*  ********************************************************************************************************************
*  1.00.00   2008-09-09  Are     None          Initial Version
*  1.00.01   2009-01-22  Are     None          Enabling Peripherals added
*  1.00.02   2009-03-16  Are     ESCAN00032782,
*                                ESCAN00032758,
*                                ESCAN00032324,
*                                ESCAN00032317 fixed
*  1.00.03   2009-03-31  Are     None          Line number for Mcu_UseNhettu  set to 9
*  1.00.04   2010-03-19  Are     ESCAN00034735
*                                ESCAN00041065 fixed
*  1.01.00   2010-05-02  Cer     ESCAN00041052 Rework of View (Image offsets and complete rework)
*  2.00.00   2010-05-07  Cer     ESCAN00043159 Porting of module to TMS570PSFD62 (KON filtering for Identifier,
*                                              Generation, View, CFG-header)
*                                ESCAN00043232 100MHz HCLK generation error fixed
*                                ESCAN00042288 Default values corrected, value updates added
*                                ESCAN00041126 Validation rule to prevent the generation of an empty RAM section array
*                                              added
*                                ESCAN00035112 Memory section PBCFG_ROOT added
*  2.01.00   2010-11-15  Mz      ESCAN00045783 Add setting of ECPCNTL register (external clock register)
*  2.02.00   2011-03-15  Ou      ESCAN00048973 Port to TMS570LS30336U derivative
*  2.03.00   2011-09-19  Ou      ESCAN00053841 ROM clock divider is wrongly set
*                                ESCAN00053848 The PLL might not running at the expected frequency
*                                ESCAN00053917 Separate the peripherals activations/ peripherals RAM initialization
*                                ESCAN00054739 Usage of OS functions for HW register access
*  2.03.01   2012-03-02  Ou      ESCAN00057279 Workaround for errata FMZPLL #17 is configurable
*                                ESCAN00057497 Dropdown-lists not correctly visible in new Configurator Pro 4.1
**********************************************************************************************************************/

#if (!defined MCU_CFG_H_PUBLIC)
# define MCU_CFG_H_PUBLIC

/**********************************************************************************************************************
 * VERSION CHECK
 *********************************************************************************************************************/

# define MCU_CFG_MAJOR_VERSION    (2u)
# define MCU_CFG_MINOR_VERSION    (3u)
# define MCU_CFG_PATCH_VERSION    (1u)

# if (!defined (V_SUPPRESS_EXTENDED_VERSION_CHECK))
#  define DRVMCU_TMS570TIGCM01ASR_GENTOOL_MAJOR_VERSION       MCU_CFG_MAJOR_VERSION
#  define DRVMCU_TMS570TIGCM01ASR_GENTOOL_MINOR_VERSION       MCU_CFG_MINOR_VERSION
#  define DRVMCU_TMS570TIGCM01ASR_GENTOOL_PATCH_VERSION       MCU_CFG_PATCH_VERSION
# endif

/***********************************************************************************************************************
 * GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/* ====== ADDITIONAL FUNCTIONALITIES ====================================== */

# define MCU_GET_VERSION_INFO_API              /*<MCU_GET_VERSION_INFO_API/>*/ (STD_ON)
# define MCU_CFG_USE_INIT_RAM_API              /*<MCU_CFG_USE_INIT_RAM_API/>*/ (STD_OFF)
# define MCU_PERFORM_RESET_API                 /*<MCU_PERFORM_RESET_API/>*/ (STD_ON)

/* ====== HARDWARE UNITS ================================================== */

# define MCU_CFG_FLEXRAYTU_USED                /*<MCU_CFG_FLEXRAYTU_USED/>*/ (STD_ON)
#  define MCU_CFG_HETTU1_USED                  /*<MCU_CFG_HETTU1_USED/>*/ (STD_ON)
#  define MCU_CFG_HETTU2_USED                  /*<MCU_CFG_HETTU2_USED/>*/ (STD_ON)
# define MCU_CFG_GIO_USED                      /*<MCU_CFG_GIO_USED/>*/ (STD_ON)
# define MCU_CFG_MIBADC1_USED                  /*<MCU_CFG_MIBADC1_USED/>*/ (STD_ON)
# define MCU_CFG_MIBADC2_USED                  /*<MCU_CFG_MIBADC2_USED/>*/ (STD_ON)
# define MCU_CFG_FLEXRAY_USED                  /*<MCU_CFG_FLEXRAY_USED/>*/ (STD_ON)
# define MCU_CFG_DCAN1_USED                    /*<MCU_CFG_DCAN1_USED/>*/ (STD_ON)
# define MCU_CFG_DCAN2_USED                    /*<MCU_CFG_DCAN2_USED/>*/ (STD_ON)
# define MCU_CFG_DCAN3_USED                    /*<MCU_CFG_DCAN3_USED/>*/ (STD_ON)
#  define MCU_CFG_LIN_USED                     /*<MCU_CFG_LIN_USED/>*/ (STD_ON)
#  define MCU_CFG_SCI_USED                     /*<MCU_CFG_SCI_USED/>*/ (STD_ON)
# define MCU_CFG_MIBSPIP1_USED                 /*<MCU_CFG_MIBSPIP1_USED/>*/ (STD_ON)
#  define MCU_CFG_SPIP2_USED                   /*<MCU_CFG_SPIP2_USED/>*/ (STD_ON)
#  define MCU_CFG_MIBSPIP3_USED                /*<MCU_CFG_MIBSPIP3_USED/>*/ (STD_ON)
#  define MCU_CFG_SPIP4_USED                   /*<MCU_CFG_SPIP4_USED/>*/ (STD_ON)
#  define MCU_CFG_MIBSPIP5_USED                /*<MCU_CFG_MIBSPIP5_USED/>*/ (STD_ON)
#  define MCU_CFG_DMM_USED                     /*<MCU_CFG_DMM_USED/>*/ (STD_OFF)

/* ====== COPY TRIM FROM OTP ============================================== */

# define MCU_COPY_TRIM_FROM_OTP                /*<MCU_COPY_TRIM_FROM_OTP/>*/ (STD_ON)

/* ====== CONFIGURATION FOR DEVELOPMENT MODE ============================== */

# define MCU_DEV_ERROR_DETECT                  /*<MCU_DEV_ERROR_DETECT/>*/ (STD_OFF)
# if (STD_ON == MCU_DEV_ERROR_DETECT)
#  define MCU_CFG_DO_PARAM_CHK                 /*<MCU_CFG_DO_PARAM_CHK/>*/ (STD_ON)
#  if (STD_ON == MCU_CFG_DO_PARAM_CHK)
#   define MCU_CFG_CHK_PARAM_CONFIG            /*<MCU_CFG_CHK_PARAM_CONFIG/>*/ (STD_ON)
#   define MCU_CFG_CHK_PARAM_MODE              /*<MCU_CFG_CHK_PARAM_MODE/>*/ (STD_ON)
#   define MCU_CFG_CHK_PARAM_CLOCK             /*<MCU_CFG_CHK_PARAM_CLOCK/>*/ (STD_ON)
#   define MCU_CFG_CHK_PARAM_RAMSECTION        /*<MCU_CFG_CHK_PARAM_RAMSECTION/>*/ (STD_ON)
#   define MCU_CFG_CHK_PARAM_VERSIONINFO       /*<MCU_CFG_CHK_PARAM_VERSIONINFO/>*/ (STD_ON)
#  else
#   define MCU_CFG_CHK_PARAM_CONFIG            (STD_OFF)
#   define MCU_CFG_CHK_PARAM_MODE              (STD_OFF)
#   define MCU_CFG_CHK_PARAM_CLOCK             (STD_OFF)
#   define MCU_CFG_CHK_PARAM_RAMSECTION        (STD_OFF)
#   define MCU_CFG_CHK_PARAM_VERSIONINFO       (STD_OFF)
#  endif
#  define MCU_CFG_CHK_UNINIT                   /*<MCU_CFG_CHK_UNINIT/>*/ (STD_ON)
#  define MCU_CFG_CHK_PLL_STATUS               /*<MCU_CFG_CHK_PLL_STATUS/>*/ (STD_ON)
#  define MCU_DEV_ERROR_REPORT                 /*<MCU_DEV_ERROR_REPORT/>*/ (STD_ON)
#  if (STD_ON == MCU_DEV_ERROR_REPORT)
#   define Mcu_ErrorHook(Mcu_FunctionId, Mcu_ErrorCode) ((void)/*<MCU_ERRORHOOK>*/Det_ReportError/*</MCU_ERRORHOOK>*/((MCU_MODULE_ID), (MCU_INSTANCE_ID), (Mcu_FunctionId), (Mcu_ErrorCode))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Mcu_ErrorHook(Mcu_FunctionId, Mcu_ErrorCode)
#  endif
# else /* (STD_ON == MCU_CFG_DEV_ERROR_DETECT) */
/* development mode is disabled, all development checks are disabled, */
/* do not modify the following settings                               */
#  define MCU_CFG_CHK_PARAM_CONFIG             (STD_OFF)
#  define MCU_CFG_CHK_PARAM_MODE               (STD_OFF)
#  define MCU_CFG_CHK_PARAM_CLOCK              (STD_OFF)
#  define MCU_CFG_CHK_PARAM_RAMSECTION         (STD_OFF)
#  define MCU_CFG_CHK_PARAM_VERSIONINFO        (STD_OFF)
#  define MCU_CFG_CHK_UNINIT                   (STD_OFF)
#  define MCU_CFG_CHK_PLL_STATUS               (STD_OFF)
# endif /* (STD_OFF == MCU_CFG_DEV_ERROR_DETECT) */

/* ====== CONFIGURATION FOR PRODUCTION MODE =============================== */

# define MCU_PROD_ERROR_REPORT                 /*<MCU_PROD_ERROR_REPORT/>*/ (STD_ON)
# if (STD_ON == MCU_PROD_ERROR_REPORT)
#  define Mcu_SetError(Mcu_ErrorCode) ((void)/*<MCU_ERRORROUTINE>*//*</MCU_ERRORROUTINE>*/((Mcu_ErrorCode), (DEM_EVENT_STATUS_FAILED))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Mcu_SetError(Mcu_ErrorCode)
# endif

/* ====== INDEXES PARAMETERS ============================================== */

/* RAM sections */
/*<MCU_CFG_RAMSECTIONUSERCONFIG_LIST>*/
/*</MCU_CFG_RAMSECTIONUSERCONFIG_LIST>*/

/* clock configurations */
/*<MCU_CFG_CLOCKUSERCONFIG_LIST>*/
#define McuClockSettingConfig     (0u)
/*</MCU_CFG_CLOCKUSERCONFIG_LIST>*/


/* mode configurations */
/*<MCU_CFG_MODEUSERCONFIG_LIST>*/
#define McuModeConf     (0u)
/*</MCU_CFG_MODEUSERCONFIG_LIST>*/


/* ====== SPECIAL REGISTER ACCESS ========================================= */

# define MCU_SRA_ENABLED                  /*<MCU_SRA_ENABLED/>*/ (STD_ON)
# define MCU_SRA_ONLY_FOR_WRITE           /*<MCU_SRA_ONLY_FOR_WRITE/>*/ (STD_ON)
# define MCU_SRA_ONLY_FOR_PRIV_MODE_REGS  /*<MCU_SRA_ONLY_FOR_PRIV_MODE_REGS/>*/ (STD_ON)
# define MCU_SRA_NOT_IN_INIT              /*<MCU_SRA_NOT_IN_INIT/>*/ (STD_OFF)

/* ====== ERRATA WORKAROUND =============================================== */

# define MCU_ERRATA_FMZPLL17_WORKAROUND   /*<MCU_ERRATA_FMZPLL17_WORKAROUND/>*/ (STD_OFF)

/**********************************************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* nothing to be generated */

/**********************************************************************************************************************
 * GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/* ====== ROOT CONFIG DECLARATION ========================================= */

# if (!defined MCU_PBCFG_SOURCE)
/* external declarations of configuration instances */
#  define MCU_START_SEC_PBCFG_ROOT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/*<MCU_CFG_EXTERN>*/
extern CONST(Mcu_ConfigType, MCU_PBCFG) McuModuleConfiguration;
/*</MCU_CFG_EXTERN>*/

#  define MCU_STOP_SEC_PBCFG_ROOT
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif

#endif /* (!defined MCU_CFG_H_PUBLIC) */

#if (defined MCU_SOURCE) || (defined MCU_PBCFG_SOURCE) /* PRQA S 883 */ /* MD_Mcu_883 */

/**********************************************************************************************************************
 * PRIVATE DATA PROTOTYPES
 *********************************************************************************************************************/

/*<MCU_CFG_INCLUDE_DET/>*/ 
/*<MCU_CFG_INCLUDE_DEM/>*/ #include ""

# define Mcu_GlobalSuspend() /*<MCU_GLOBAL_SUSPEND/>*/ SchM_Enter_Mcu(MCU_EXCLUSIVE_AREA_0)
# define Mcu_GlobalRestore() /*<MCU_GLOBAL_RESTORE/>*/ SchM_Exit_Mcu(MCU_EXCLUSIVE_AREA_0)

/*<MCU_CFG_INCLUDE_IRQ/>*/ 
#include "SchM_Mcu.h"
#include "Os.h"


#endif

/**********************************************************************************************************************
 * END OF FILE: Mcu_Cfg.h
 *********************************************************************************************************************/

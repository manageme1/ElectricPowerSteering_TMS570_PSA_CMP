/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2006-2009 by Vector Informatik GmbH, all rights reserved
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  EcuM_Generated_Types.h
 *    Component:  SysService_AsrEcuM
 *       Module:  EcuM
 *    Generator:  EAD
 *
 *  Description:  The ECU State Manager is responsible for
 *                  - initialization of the entire BSW Modules (including OS and RTE
 *                  - configuration of the entire ECU for sleep mode
 *                  - fast and systematic wakeup behavior
 *                  - shutdown of the ECU
 *
 *                To be very independent of different system designs e.g. different Modules to initialize,
 *                external/internal Watchdog, etc., the ECU State Manager provides over a mechanism named "callouts"
 *                a way to adapt the startup and shutdown behavior. The system designer must fill the proper code into
 *                the callouts.
 *********************************************************************************************************************/

/**********************************************************************************************************************
    Bswmd Version : 4.08.00
    Project       : EPS.ecuc
    Generated     : 2014-01-31 04:28 pm
    Licensee      : Vector AUTOSAR Basic Software (MICROSAR)
 
    This file is generated by DaVinci Configurator Base - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Christian Marchl              Chm           Vector Informatik GmbH
 *  Bethina Mausz                 Bmz           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  03.00.01  2007-09-26  Chm     ESCAN00022372 Quality assurance activities necessary for Component
 *                                              SysService_EcuM
 *  03.00.02  2007-11-21  Chm     ESCAN00023354 No Changes
 *  03.00.03  2007-12-06  Chm     ESCAN00022871 No changes here
 *                                -             Added Revision History
 *  04.00.00  2008-03-01  Chm     ESCAN00024563 No Changes here
 *                                ESCAN00023356 No changes here
 *                                ESCAN00024323 No Changes here
 *                                ESCAN00027863 No Changes here
 *  04.00.01  2008-04-16  Chm     ESCAN00026037 No Changes here
 *                                ESCAN00026537 No Changes here
 *                                ESCAN00026471 No changes here
 *  04.01.00  2008-05-15  Chm     -             No Changes here
 *  04.01.01  2008-06-02  Chm     -             Added include of Rte_Type.h,
 *                                              Added Rte-dependend type definition for types: EcuM_StateType,
 *                                              EcuM_BootTargetType, EcuM_UserType
 *  04.01.02  2008-06-06  Chm     ESCAN00027459 Added EcuM_ConfigRefType
 *                                ESCAN00027313 No changes here
 *  04.01.03  2008-06-17  Chm     ESCAN00027659 No Changes here
 *  04.02.00  2008-06-30  Chm     ESCAN00027955 Added structure member of EcuM_ConfigType for generator version.
 *  04.03.00  2008-07-23  Chm     ESCAN00028372 No Changes here
 *                                ESCAN00028511 No Changes here
 *  04.03.01  2008-08-08  Bmz     -             No changes here
 *  04.03.02  2008-08-13  Bmz     ESCAN00029221 No changes here
 *  04.03.03  2008-09-01  Chm     ESCAN00029621 No changes here
 *                                ESCAN00029300 No changes here
 *  04.03.04  2008-09-24  Chm     ESCAN00027708 No changes here
 *                                ESCAN00029799 No changes here
 *                                ESCAN00029815 No changes here
 *                                ESCAN00029313 No changes here
 *  04.04.00  2008-10-22  Chm     ESCAN00030516 Added PreCompile Variant support
 *  05.00.00  2008-11-28  Chm     ESCAN00031216 No changes here
 *                                ESCAN00031214 Added file EcuM_PrivateCfg.h to component
 *                                ESCAN00030497 No changes here
 *                                ESCAN00030132 No changes here
 *                                ESCAN00031520 No changes here
 *                                ESCAN00031786 No changes here
 *                                ESCAN00031787 No changes here
 *  05.01.00  2009-02-19  Chm     ESCAN00032011 No changes here
 *            2009-02-19  Chm     ESCAN00032502 No changes here
 *            2009-02-19  Chm     ESCAN00033069 No changes here
 *            2009-02-20  Chm     ESCAN00031852 No changes here
 *            2009-02-23  Chm     ESCAN00029165 No changes here
 *            2009-02-24  Chm     ESCAN00031789 No changes here
 *            2009-03-04  Chm     ESCAN00033480 Range of EcuM_ModeType missing
 *            2009-03-09  Chm     ESCAN00033718 No changes here
 *            2009-03-16  Chm     ESCAN00033834 No changes here
 *  05.02.00  2009-05-19  Chm     ESCAN00035001 No changes here
 *            2009-07-07  Chm     ESCAN00036192 No changes here
 *  05.03.00  2009-07-13  Chm     ESCAN00036369 No changes here
 *            2009-07-13  Chm     ESCAN00036370 No changes here
 *            2009-07-13  Chm     ESCAN00035287 No changes here
 *            2009-07-15  Chm     ESCAN00036441 No changes here
 *            2009-07-16  Chm     ESCAN00035917 No changes here
 *            2009-07-16  Chm     ESCAN00035535 No changes here
 *            2009-07-17  Chm     ESCAN00036348 No changes here
 *            2009-07-16  Chm     ESCAN00035536 No changes here
 *            2009-07-21  Chm     ESCAN00034788 Change compiler abstraction keyword from AUTOMATIC to TYPEDEF
 *  05.03.01  2009-10-22  Chm     ESCAN00037381 No changes here
 *  05.03.02  2009-12-11  Chm     ESCAN00039720 No changes here
 *            2009-12-11  Chm     ESCAN00037612 No changes here
 *            2009-12-14  Chm     ESCAN00039748 No changes here
 *            2009-12-15  Chm     ESCAN00034936 No changes here
 *            2009-12-21  Chm     ESCAN00039882 No changes here
 *            2010-02-19  Chm     ESCAN00040987 No changes here
 *            2010-02-23  Chm     ESCAN00041075 No changes here
 *  05.03.03  2010-04-14  Chm     ESCAN00041836 No changes here
 *            2010-04-19  Chm     ESCAN00041426 No changes here
 *            2010-04-24  Chm     ESCAN00041446 No changes here
 *            2010-04-24  Chm     ESCAN00041827 No changes here
 *  05.03.04  2010-07-29  Bmz     ESCAN00044245 No changes here
 *            2010-07-29  Bmz     ESCAN00044246 No changes here
 *            2010-07-29  Bmz     ESCAN00043065 No changes here
 *  05.04.00  2010-10-18  Bmz     ESCAN00044990 No changes here
 *                                ESCAN00046061 No changes here
 *  05.06.00  2010-11-26  Bmz     ESCAN00046158 No changes here
 *                                ESCAN00047183 No changes here
 *                                ESCAN00047434 No changes here
 *                                ESCAN00045138 No changes here
 *            2011-01-26  Bmz     Prefix generation for DEM-ERRORS inserted in GenerationS.xml
 *                                G601 updated
 *            2011-02-03  Bmz     ESCAN00048364 No changes here
 *  05.06.01  2011-03-14  Bmz     ESCAN00049201 update version number
 *  05.07.00  2011-04-26  Bmz     ESCAN00049111 No changes here
 *  05.07.01  2011-05-12  Bmz     ESCAN00049989 No changes here
 *********************************************************************************************************************/

/*---- Protection against multiple inclusion -------------------------------*/
#if (!defined ECUM_GENERATED_TYPES_H)
# define ECUM_GENERATED_TYPES_H

/*---- Version identification - satisfies ----------------------------------*/
# define ECUM_GENERATED_TYPES_MAJOR_VERSION    (5u)
# define ECUM_GENERATED_TYPES_MINOR_VERSION    (7u)
# define ECUM_GENERATED_TYPES_PATCH_VERSION    (1u)

# include "Std_Types.h"

/*<ECUM_OS_INCLUDE_FILE/>*/ #include "Os.h"
/*<ECUM_NVM_TYPES_FILE/>*/ #include "Nvm.h"

/*<ECUM_COM_STACK_TYPES_INCLUDE_FILE/>*/ #include "ComStack_Types.h"

/*<ECUM_RTE_TYPE_INCLUDE_FILE/>*/ #include "Rte_Type.h"

# define ECUM_COMM_USED                                               (0x01u)
# define ECUM_WDGM_USED                                               (0x02u)

# define ECUM_GEN_BOOT_TARGET_PORT                                    /*<ECUM_GEN_BOOT_TARGET_PORT/>*/ (STD_OFF)
# define ECUM_GEN_SHUTDOWN_TARGET_PORT                                /*<ECUM_GEN_SHUTDOWN_TARGET_PORT/>*/ (STD_OFF)
# define ECUM_GEN_STATE_REQUEST_PORT                                  /*<ECUM_GEN_STATE_REQUEST_PORT/>*/ (STD_ON)
# define ECUM_GEN_MODE_SWITCH_PORT                                    /*<ECUM_GEN_MODE_SWITCH_PORT/>*/ (STD_OFF)
# define ECUM_GEN_APPLICATION_MODE_PORT                               /*<ECUM_GEN_APPLICATION_MODE_PORT/>*/ (STD_OFF)

/* type abstraction of ComM module */
typedef uint8 EcuM_ChannelHandleType;

typedef uint8 EcuM_ModeType;
/* ------------------------------------- Range of EcuM_StateType ------------------------------------------------- */
/* These values are only applicable if the mode notification is used without RTE. If RTE is used the corresponding
 * symbols are defined by RTE.
 */
# define ECUM_MODE_POST_RUN                                           (0)
# define ECUM_MODE_RUN                                                (1)
# define ECUM_MODE_SHUTDOWN                                           (2)
# define ECUM_MODE_SLEEP                                              (3)
# define ECUM_MODE_STARTUP                                            (4)
# define ECUM_MODE_WAKE_SLEEP                                         (5)

typedef uint32 EcuM_WakeupSourceType;
/* ------------------------------------- Range of EcuM_WakeupSourceType -------------------------------------------- */

# define ECUM_WKSOURCE_NONE                                           (EcuM_WakeupSourceType)(0u)
/*<ECUM_WAKEUP_SOURCE_NAME>*/
#define ECUM_WKSOURCE_POWER (EcuM_WakeupSourceType)(1u)
#define ECUM_WKSOURCE_RESET (EcuM_WakeupSourceType)(2u)
#define ECUM_WKSOURCE_INTERNAL_RESET (EcuM_WakeupSourceType)(4u)
#define ECUM_WKSOURCE_INTERNAL_WDG (EcuM_WakeupSourceType)(8u)
#define ECUM_WKSOURCE_EXTERNAL_WDG (EcuM_WakeupSourceType)(16u)
#define ECUM_WKSOURCE_SOFTWARE_RESET (EcuM_WakeupSourceType)(32u)
#define ECUM_WKSOURCE_OSCI_OR_PLLSLIP_RESET (EcuM_WakeupSourceType)(64u)
#define ECUM_WKSOURCE_EXTERNAL_RESET (EcuM_WakeupSourceType)(128u)
#define ECUM_WKSOURCE_RESET_UNDEFINED (EcuM_WakeupSourceType)(256u)
/*</ECUM_WAKEUP_SOURCE_NAME>*/

# define ECUM_WKSOURCE_ALL_SOURCES                                    (EcuM_WakeupSourceType) (~((EcuM_WakeupSourceType)0u))

typedef struct
{
  EcuM_WakeupSourceType wakeupSource;
  uint8 mcuMode;
  uint8 WatchdogMode_u8;
} EcuM_SleepModeConfigType;

# if ((ECUM_GEN_SHUTDOWN_TARGET_PORT == STD_OFF) && (ECUM_GEN_STATE_REQUEST_PORT == STD_OFF))

  typedef uint8 EcuM_StateType;
  /* ------------------------------------- Range of EcuM_StateType ------------------------------------------------- */
#  define ECUM_SUBSTATE_MASK                                          (0x0Fu)
#  define ECUM_STATE_STARTUP                                          (0x10u)
#  define ECUM_STATE_STARTUP_ONE                                      (0x11u)
#  define ECUM_STATE_STARTUP_TWO                                      (0x12u)
#  define ECUM_STATE_WAKEUP                                           (0x20u)
#  define ECUM_STATE_WAKEUP_ONE                                       (0x21u)
#  define ECUM_STATE_WAKEUP_VALIDATION                                (0x22u)
#  define ECUM_STATE_WAKEUP_REACTION                                  (0x23u)
#  define ECUM_STATE_WAKEUP_TWO                                       (0x24u)
#  define ECUM_STATE_WAKEUP_WAKESLEEP                                 (0x25u)
#  define ECUM_STATE_WAKEUP_TTII                                      (0x26u)
#  define ECUM_STATE_RUN                                              (0x30u)
#  define ECUM_STATE_APP_RUN                                          (0x32u)
#  define ECUM_STATE_APP_POST_RUN                                     (0x33u)
#  define ECUM_STATE_SHUTDOWN                                         (0x40u)
#  define ECUM_STATE_PREP_SHUTDOWN                                    (0x44u)
#  define ECUM_STATE_GO_SLEEP                                         (0x49u)
#  define ECUM_STATE_GO_OFF_ONE                                       (0x4Du)
#  define ECUM_STATE_GO_OFF_TWO                                       (0x4Eu)
#  define ECUM_STATE_SLEEP                                            (0x50u)
#  define ECUM_STATE_RESET                                            (0x90u)
#  define ECUM_STATE_OFF                                              (0x80u)
#  define ECUM_STATE_ERROR                                            (0xFFu)

# endif /* ((ECUM_GEN_SHUTDOWN_TARGET_PORT == STD_OFF) && (ECUM_GEN_STATE_REQUEST_PORT == STD_OFF)) */

typedef uint8 EcuM_WakeupStatusType;
/* ------------------------------------- Range of EcuM_WakeupStatusType -------------------------------------------- */
# define ECUM_WKSTATUS_NONE                                           (0u)
# define ECUM_WKSTATUS_PENDING                                        (1u)
# define ECUM_WKSTATUS_VALIDATED                                      (2u)
# define ECUM_WKSTATUS_EXPIRED                                        (3u)

typedef uint8 EcuM_WakeupReactionType;
/* ------------------------------------- Range of EcuM_WakeupReactionType ------------------------------------------ */
# define ECUM_WKACT_RUN                                               (0u)
# define ECUM_WKACT_TTII                                              (2u)
# define ECUM_WKACT_SHUTDOWN                                          (3u)

# if (ECUM_GEN_BOOT_TARGET_PORT == STD_OFF)

  typedef uint8 EcuM_BootTargetType;
  /* ------------------------------------- Range of EcuM_BootTargetType ---------------------------------------------- */
#  define ECUM_BOOT_TARGET_APP                                        (0u)
#  define ECUM_BOOT_TARGET_BOOTLOADER                                 (1u)

# endif /* (ECUM_GEN_BOOT_TARGET_PORT == STD_OFF) */

# if (ECUM_GEN_STATE_REQUEST_PORT == STD_OFF)

typedef uint8 EcuM_UserType;

# endif /* (ECUM_GEN_STATE_REQUEST_PORT == STD_OFF) */

# if (ECUM_GEN_APPLICATION_MODE_PORT == STD_OFF)

typedef uint8 EcuM_AppModeType;

# endif /* (ECUM_GEN_APPLICATION_MODE_PORT == STD_OFF) */

/* ------------------------------------- Range of EcuM_UserType ---------------------------------------------------- */
/*<ECUM_USER_NAME>*/
#define EcuMUsrCfg_EPS (1u)
/*</ECUM_USER_NAME>*/


/* ------------------------------------- Range of Sleep modes  ----------------------------------------------------- */
/*<ECUM_SLEEP_MODE_LIST>*/
#define InitialEcuMSleepModeEcuMSleepMode (0u)
/*</ECUM_SLEEP_MODE_LIST>*/


typedef uint16 EcuM_TTII_DivisorType;
typedef uint16 EcuM_SelfRequestPeriodType;
typedef uint16 EcuM_WakeupTimeoutType;

typedef struct
{
  EcuM_WakeupTimeoutType EcuM_WakeupTimeoutLeft_t;
  uint8 EcuM_WakeupValState_u8;
} EcuM_WakeupTimeoutCtrlType;

/* Range of EcuM_WakeupValState_u8 within EcuM_WakeupTimeoutCtrlType */
# define ECUM_WKS_TIMEOUT_STATE_STOPPED                               (0) /* EcuM_StartWakeupSources() not executed */
# define ECUM_WKS_TIMEOUT_STATE_STARTED                               (1) /* EcuM_StartWakeupSources() already executed */

/* Shutdown Target type definition */
typedef struct
{
  EcuM_StateType DefaultState_t;
  uint8 DefaultSleepMode_u8;
} EcuM_DefaultShutdownTargetType;

/**
 * forward declaration of the incomplete type which specifies the wakeup source configuration
 * to avoid the include of Mcu.h within the header file.
 */
typedef CONSTP2CONST(struct EcuM_WakeupSourceDefType, TYPEDEF, ECUM_APPL_CONFIG) EcuM_WakeupSourceDefPtrType;

typedef uint8 EcuM_IntFunctionCallType;
/* ------------------------------------- Range of FunctionIDs  ----------------------------------------------------- */
# define ECUM_CALL_MCU_PERFORM_RESET                                  (0u)
# define ECUM_CALL_SCHM_INIT                                          (1u)
# define ECUM_CALL_DEM_INIT                                           (2u)
# define ECUM_CALL_DEM_SHUTDOWN                                       (3u)
# define ECUM_CALL_COMM_DEINIT                                        (4u)
# define ECUM_CALL_NVM_READALL                                        (5u)
# define ECUM_CALL_NVM_WRITEALL                                       (6u)
# define ECUM_CALL_NVM_CANCEL_WRITEALL                                (7u)
# define ECUM_CALL_RTE_START                                          (8u)
# define ECUM_CALL_RTE_STOP                                           (9u)
# define ECUM_CALL_OS_SHUTDOWN_OS                                     (10u)
# define ECUM_CALL_OS_GET_RES_SCHEDULER                               (11u)
# define ECUM_CALL_OS_RELEASE_RES_SCHEDULER                           (12u)
# define ECUM_CALL_COMM_RUN_MODE_IND                                  (13u)

typedef P2FUNC (void, ECUM_CODE, EcuM_DriverInitListFuncType)(void);
typedef P2FUNC (void, ECUM_CODE, EcuM_ModeSwitchEventFuncType)(uint8 modeEvent_u8);

typedef struct
{
# if !defined ( V_SUPPRESS_EXTENDED_VERSION_CHECK )
  uint32 EcuM_GeneratorVersion;                             /* Generator version of component */
# endif

  /*list of configured sleep modes.*/
  CONSTP2CONST(EcuM_SleepModeConfigType, ECUM_VAR_NOINIT, ECUM_APPL_CONFIG) SleepModeList_pt;
  /*List of wakeupsources.*/
  EcuM_WakeupSourceDefPtrType WakeupSourceList_pt;
  /* List of Watchdog Manager modes */
  CONSTP2CONST(uint8, ECUM_VAR_NOINIT, ECUM_APPL_CONFIG) WatchdogManagerModes_pau8;
  /* runtime call ids */
  CONSTP2CONST(uint8, ECUM_VAR_NOINIT, ECUM_APPL_CONFIG) CallId_au8;
  /* Divisor List */
  CONSTP2CONST(uint8, ECUM_VAR_NOINIT, ECUM_APPL_CONFIG) TTII_DivisorList_pt;
  /* TTII successor list */
  CONSTP2CONST(uint8, ECUM_VAR_NOINIT, ECUM_APPL_CONFIG) TTII_SuccesorList_pt;
  EcuM_ModeSwitchEventFuncType ModeEventFunction_pt;        /* Pointer to the configured mode switch event function */
  EcuM_DriverInitListFuncType DriverInitListOne;            /* Pointer to DriverInitOne callout for this runtime */
  EcuM_DriverInitListFuncType DriverInitListTwo;            /* Pointer to DriverInitTwo callout for this runtime */
  EcuM_DriverInitListFuncType DriverInitListThree;          /* Pointer to DriverInitThree callout for this runtime */
  EcuM_DriverInitListFuncType DriverRestart;                /* Pointer to DriverInitRestart callout for this runtime */
  uint32 MaxWakeupSourceValue_u32;                          /* Maximum allowed value for wakeup sources*/
  AppModeType DefaultAppMode_t;                             /* Default application mode for the Os.*/
  EcuM_DefaultShutdownTargetType DefaultShutdownTarget_t;   /* Default shutdown after releasing the last RUN request.*/
  EcuM_SelfRequestPeriodType  SelfRequestPeriod_t;          /* Timeout for the self run request.*/
  uint8 MaxNumberOfWakeupSources_u8;                        /* Number of wakeup sources.*/
  uint8 MaxEcuMUsersCount_u8;                               /* max(CommUsers,EcuMUsers)*/
  uint8 MaxUsersCount_u8;                                   /* Only EcuM Users.*/
  uint8 MaxComMUsersCount_u8;                               /* Only ComM Users*/
  uint8 MaxSleepModes_u8;                                   /* Maximum Number of configured sleep modes*/
  uint8 Max_TTII_SleepModes_u8;                             /* Maximum Number of TTII sleep modes */
  uint8 UsedModules_u8;                                     /* Flags for Used Modules */
} EcuM_PbcfgConfigType;

typedef EcuM_PbcfgConfigType EcuM_ConfigType;

typedef struct
{
  P2VAR(uint8, AUTOMATIC, ECUM_VAR) ChannelNotifyBuffer_pu8; /* Buffer of channel ids where a wakeup occurred */
  uint8 BufferCtrl_u8;        /* Variable which stores the appearance of wakeupevent on communication channels */
  boolean ComMInitialized_b;  /* Flag which indicates that the ComM is initialized */
} EcuM_WakeupNotificationType;

typedef P2VAR(EcuM_ConfigType, TYPEDEF, ECUM_APPL_CONFIG) EcuM_ConfigRefType;

#endif
/**********************************************************************************************************************
 *  END OF FILE: ECUM_GENERATED_TYPES.H
 *********************************************************************************************************************/

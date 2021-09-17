/* -----------------------------------------------------------------------------
  Filename:    Dem_Lcfg.h
  Description: Toolversion: 11.08.02.01.30.01.24.00.00.00
               
               Serial Number: CBD1300124
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR_Vector_SLP3
                              Micro: TMS570LS30376USC
                              Compiler: TexasInstruments ccs 4.9.2
               
               
               Generator Fwk   : GENy 
               Generator Module: Dem
               
               Configuration   : C:\synergy_projects_working\PSA\PSA_BMPV_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U

  Generated by , 2016-05-20  11:43:24
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(DEM_LCFG_H)
#define DEM_LCFG_H

/* -----------------------------------------------------------------------------
    &&&~ Dem Parameters
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
#define DEM_MAX_NUMBER_EVENT_ENTRY           35
#define DEM_NUMBER_OF_VIEWS                  0
#define DEM_NUMBER_OF_EVENTS                 76
#define DEM_STATUS_AVAILABILITY_MASK         0xFF
#define DEM_NUMBER_OF_OPERATION_CYCLES       4
#define DEM_NUMBER_OF_INDICATORS             1
#define DEM_MAX_EXTDATA_RECORD_SIZE          0
#define DEM_MAX_SNAPSHOT_RECORD_SIZE         24
#define DEM_BSW_ERROR_BUFFER_SIZE            52
#define DEM_ADD_ERROR_BUFFER_SIZE            1
#define DEM_SNAPSHOTS_PER_DTC                1
#define DEM_FIRST_SNAPSHOT_TO_OVERWRITE      0
#define DEM_PRESTORE_FF_BUFFER_SIZE          1
/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Dem_Indicators
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Diag_AsrDemLinktimeCRC */
#define ETATDA2                              0
/* END of Checksum exclude for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Defined DTC Groups
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
#define DEM_DTC_GROUP_POWERTRAIN_DTCS        0x000001
#define DEM_DTC_GROUP_CHASSIS_DTCS           0x400000
#define DEM_DTC_GROUP_BODY_DTCS              0x800000
#define DEM_DTC_GROUP_NETWORK_COM_DTCS       0xC00000
/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Dem configuration type definitions
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
typedef P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA) Dem_ApplBufferPtrType;
typedef VAR(uint8, TYPEDEF) Dem_DtcChronoRefType;
typedef struct Dem_ChronoPriMemTypeTag
{
  Dem_EventIdType dtcInternalNumber;
  Dem_DtcChronoRefType ref;
} Dem_ChronoPriMemType;
typedef struct Dem_NonVolatileDataTypeTag
{
  uint8 consistencyPattern[DEM_NVDATA_PATTERN_SIZE];
  Dem_DtcChronoRefType chronoPriMemUsed;
  uint8 primaryStack[DEM_MAX_NUMBER_EVENT_ENTRY][(DEM_MAX_EXTDATA_RECORD_SIZE)+(DEM_SNAPSHOTS_PER_DTC*DEM_MAX_SNAPSHOT_RECORD_SIZE)+1];
  Dem_ChronoPriMemType chronoPriMem[DEM_MAX_NUMBER_EVENT_ENTRY];
  Dem_DtcStatusByteType dtcStatusByte[DEM_NUMBER_OF_EVENTS+1];
  sint8 dtcFaultDetectionCounter[DEM_NUMBER_OF_EVENTS+1];
  uint8 dtcAgingCounter[DEM_MAX_NUMBER_EVENT_ENTRY];
  Dem_EventIdType firstFailedEvent;
  Dem_EventIdType firstConfirmedEvent;
  Dem_EventIdType mostRecentFailedEvent;
  Dem_EventIdType mostRecentConfirmedEvent;
  uint8 terminatingPattern[DEM_NVDATA_PATTERN_SIZE];
} Dem_NonVolatileDataType;
typedef struct Dem_DemConfigurationTypeTag
{
  uint8 DTCTranslationFormat;
} Dem_DemConfigurationType;
typedef struct Dem_DIDLookupTableTypeTag
{
  uint16 did;
  Dem_GetDataValueByDataIdentifierType pFunc;
} Dem_DIDLookupTableType;
typedef VAR(uint8, TYPEDEF) Dem_DataRecordSizeType;
/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Global Data Prototypes
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
/* -----------------------------------------------------------------------------
    &&&~ ram buffers of NVRAM stored data
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
#include "MemMap.h"
extern VAR(Dem_NonVolatileDataType, DEM_APPL_DATA) Dem_NvData; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern VAR(uint8, DEM_APPL_DATA) Dem_PreFFBuffer[DEM_PRESTORE_FF_BUFFER_SIZE]; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ ram buffers for internal data
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"
extern VAR(Dem_OperationCycleStateType, DEM_VAR_NOINIT) Dem_OperationCycleState[]; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule 8.12: When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation. */ /* PRQA S 3684 */
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"

#define DEM_START_SEC_VAR_FAST_8BIT
#include "MemMap.h"
extern VAR(Dem_DtcInternalStatusType, DEM_VAR_NOINIT_FAST) Dem_DtcInternalStatus[]; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule 8.12: When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation. */ /* PRQA S 3684 */
#define DEM_STOP_SEC_VAR_FAST_8BIT
#include "MemMap.h"

#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"
extern VAR(uint32, DEM_VAR_NOINIT) Dem_EnableConditionState; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern VAR(Dem_AQElementType, DEM_VAR_NOINIT) Dem_ActionQueue[]; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule 8.12: When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation. */ /* PRQA S 3684 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"



/* -----------------------------------------------------------------------------
    &&&~ Precompile/Linktime specific config data
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_CONST_LCFG
#include "MemMap.h"
extern CONST(Dem_DemConfigurationType, DEM_CONST) Dem_DemConfiguration; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(Dem_NvMBlockIdType, DEM_CONST) Dem_NvramBlockIdTable[]; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule 8.12: When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation. */ /* PRQA S 3684 */
extern CONST(Dem_DTCGroupMappingType, DEM_CONST) Dem_DTCGroupTable[]; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule 8.12: When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation. */ /* PRQA S 3684 */
extern CONST(uint8, DEM_CONST) Dem_LinkTimeProperty[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_CONST) Dem_InitMonitorIndexTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_InitMonitorFPtrType, DEM_CONST) Dem_InitMonitorFPtrTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_TriggerDTCFunctionType, DEM_CONST) Dem_TriggerDTCFunctionTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_CONST) Dem_TriggerDTCIndexTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_CONST) Dem_TriggerDTCCountTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_TriggerFunctionType, DEM_CONST) Dem_TriggerFunctionTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(uint8, DEM_CONST) Dem_IndicatorCountTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_IndicatorIdType, DEM_CONST) Dem_IndicatorIdTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_IndicatorStatusType, DEM_CONST) Dem_IndicatorStatusTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_DTCGroupKindType, DEM_CONST) Dem_EventGroupTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_DIDLookupTableType, DEM_CONST) Dem_DIDLookupTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */
extern CONST(Dem_GetExtDataRecordFPtrType, DEM_CONST) Dem_GetExtDataRecordListTable[]; /* MISRA-C:2004 Rule A function-like macro shall not be invoked without all of its arguments.:  */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */ /* MISRA-C:2004 Rule When an array is declared with external linkage, its size shall be stated explicitly or defined implicitly by initialisation.:  */ /* PRQA S 3684 */

extern CONST(uint8, DEM_CONST) Dem_StatusAvailabilityMask; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint16, DEM_CONST) Dem_MaxSizeOfSnapshotRecord; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint16, DEM_CONST) Dem_MaxSizeOfExtdataRecord; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint16, DEM_CONST) Dem_NumberOfOperationCycles; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint16, DEM_CONST) Dem_NumberOfIndicators; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint16, DEM_CONST) Dem_PriMemElementSize; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint16, DEM_CONST) Dem_SizeofPreFFBuffer; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(Dem_DtcChronoRefType, DEM_CONST) Dem_MaxPriMemElementCount; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(Dem_EventIdType, DEM_CONST) Dem_MaxCountOfEventId; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint8, DEM_CONST) Dem_SnapshotsPerDTC; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint8, DEM_CONST) Dem_FirstOverwritableSnapshot; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint8, DEM_CONST) Dem_ReportErrorBufferSize; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint16, DEM_CONST) Dem_ActionQueueCount; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint8, DEM_CONST) Dem_DTCGroupMappingCount; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint8, DEM_CONST) Dem_NvramBlockIdCount; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONST(uint8, DEM_CONST) Dem_SizeofEventIdType; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */

extern CONSTP2VAR(Dem_NonVolatileDataType, DEM_CONST, DEM_APPL_DATA) Dem_NvDataPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_APPL_DATA) Dem_ConsistencyPatternPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_APPL_DATA) Dem_PrimaryStackPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(Dem_ChronoPriMemType, DEM_CONST, DEM_APPL_DATA) Dem_ChronoPriMemPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(Dem_DtcStatusByteType, DEM_CONST, DEM_APPL_DATA) Dem_DtcStatusBytePtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(Dem_DtcChronoRefType, DEM_CONST, DEM_APPL_DATA) Dem_ChronoPriMemUsedPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(sint8, DEM_CONST, DEM_APPL_DATA) Dem_FaultDetectionCounterPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_APPL_DATA) Dem_DtcAgingCounterPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(Dem_EventIdType, DEM_CONST, DEM_APPL_DATA) Dem_FirstFailedEventIdPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(Dem_EventIdType, DEM_CONST, DEM_APPL_DATA) Dem_FirstConfirmedEventIdPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(Dem_EventIdType, DEM_CONST, DEM_APPL_DATA) Dem_MostRecentFailedEventIdPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(Dem_EventIdType, DEM_CONST, DEM_APPL_DATA) Dem_MostRecentConfmdEventIdPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_VAR_NOINIT) Dem_OperationCycleStatePtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */
extern CONSTP2VAR(uint8, DEM_CONST, DEM_APPL_DATA) Dem_TerminatingPatternPtr; /* MISRA-C:2004 Rule 19.8: A function-like macro shall not be invoked without all of its arguments. */ /* PRQA S 0850 */ /* AUTOSAR MemMap/CompilerAbstraction */

#define DEM_STOP_SEC_CONST_LCFG
#include "MemMap.h"


/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Global Function Prototypes
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Diag_AsrDemLinktimeCRC */
#define DEM_START_SEC_CODE
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Access function to global configuration data
 ----------------------------------------------------------------------------- */

extern FUNC(Dem_EventIdType, DEM_CODE) DemCfg_GetMaxCountOfEventId(void);
extern FUNC(uint8, DEM_CODE) DemCfg_GetDTCTranslationFormat(void);
extern FUNC(uint16, DEM_CODE) DemCfg_GetMaxCountOfOperationCycle(void);
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfSnapshotsPerDTC(void);
extern FUNC(uint8, DEM_CODE) DemCfg_GetFirstOccurredRecordNr(void);
extern FUNC(uint16, DEM_CODE) DemCfg_GetMaxSnapshotRecordSize(void);
extern FUNC(uint8, DEM_CODE) DemCfg_Get1stOverwrtSnapshotIndex(void);
/* No longer used, kept for compatibility */
#define DemCfg_GetCountOfGlobalSsDIDs(EventId) 0
#define DemCfg_GetFirstGlobalSsRecord(EventId) 0
extern FUNC(uint16, DEM_CODE) DemCfg_GetMaxExtdataRecordSize(void);
extern FUNC(Dem_DtcChronoRefType, DEM_CODE) DemCfg_GetMaxCountOfPriMemStack(void);
extern FUNC(uint32, DEM_CODE) DemCfg_GetEnableConditionInitValue(void);


extern FUNC(Dem_DTCGroupKindType, DEM_CODE) Dem_MapGroupNumberToGroupKind(Dem_DTCType DTCGroupNumber);
extern FUNC(Dem_DTCType, DEM_CODE) DemCfg_GetDTCnumber(Dem_EventIdType EventId);

/* -----------------------------------------------------------------------------
    &&&~ Access functions to the event specific configurable data
 ----------------------------------------------------------------------------- */

extern FUNC(Dem_InitMonitorFPtrType, DEM_CODE) DemCfg_GetInitMonitorFPtr(Dem_EventIdType EventId);
extern FUNC(Dem_TriggerOnDTCIndexType, DEM_CODE) DemCfg_GetFirstTriggerOnDTC(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfTriggerOnDTC(Dem_EventIdType EventId);
extern FUNC(Dem_TriggerOnEventIndexType, DEM_CODE) DemCfg_GetFirstTriggerOnEvent(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfTriggerOnEvent(Dem_EventIdType EventId);
extern FUNC(Dem_EventPriorityType, DEM_CODE) DemCfg_GetEventPriority(Dem_EventIdType EventId);
extern FUNC(Dem_DTCSeverityType, DEM_CODE) DemCfg_GetDTCSeverity(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetAgingCycleId(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetOperationCycleId(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetNumberOfAgingCycles(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetEnableConditionMask(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfIndicatorIds(Dem_EventIdType EventId);
extern FUNC(Dem_IndicatorIdType, DEM_CODE) DemCfg_GetIndicatorId(uint16 IndIdIdx);
extern FUNC(Dem_IndicatorStatusType, DEM_CODE) DemCfg_GetIndicatorStatusType(uint16 IndIdIdx);
extern FUNC(Dem_ViewIdType, DEM_CODE) DemCfg_GetViewId(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetFunctionalUnit(Dem_EventIdType EventId);
extern FUNC(boolean, DEM_CODE) DemCfg_GetDtcSupportWarningIndicator(Dem_EventIdType EventId);
extern FUNC(boolean, DEM_CODE) DemCfg_GetDtcSuppressFlag(Dem_EventIdType EventId);
extern FUNC(boolean, DEM_CODE) DemCfg_GetIsAgingAllowed(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetIsPredebJumpPreFailed(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetIsPredebJumpPrePassed(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetPredebStepsizePreFailed(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetPredebStepsizePrePassed(Dem_EventIdType EventId);
extern FUNC(Dem_DTCKindType, DEM_CODE) DemCfg_GetDTCKind(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetDTCOrigin(Dem_EventIdType EventId);
extern FUNC(Dem_DTCGroupKindType, DEM_CODE) DemCfg_GetDTCGroupKind(Dem_EventIdType EventId);
extern FUNC(uint16, DEM_CODE) DemCfg_GetFirstSnapshot(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfSnapshotDIDs(Dem_EventIdType EventId);
extern FUNC(uint16, DEM_CODE) DemCfg_GetSnapshotDID(uint16 SsRecIdx);
extern FUNC(Dem_RecordDIDAddrType, DEM_CODE) DemCfg_GetSnapshotDIDAddr(uint16 SsRecIdx);
extern FUNC(Dem_DataRecordSizeType, DEM_CODE) DemCfg_GetSnapshotDIDDataSize(uint16 SsRecIdx);
extern FUNC(uint16, DEM_CODE) DemCfg_GetFirstSnapshotRecNumber(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetCountOfSnapshotRecNumbers(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetSnapshotRecordNumber(uint16 ssRecordIndex);
extern FUNC(uint16, DEM_CODE) DemCfg_GetSnapshotRecordDIDsSize(uint16 ssRecordIndex);
extern FUNC(uint8, DEM_CODE) DemCfg_GetSnapshotRecordNumberOfDIDs(uint16 ssRecordIndex);
extern FUNC(uint16, DEM_CODE) DemCfg_GetSnapshotRecordDIDIndex(uint16 ssRecordIndex);
extern FUNC(uint16, DEM_CODE) DemCfg_PrestoreFFBufStartOffset(Dem_EventIdType EventId);
extern FUNC(uint16, DEM_CODE) DemCfg_PrestoreFFBufSize(Dem_EventIdType EventId);
extern FUNC(uint16, DEM_CODE) DemCfg_PrestoreFFBufEndOffset(Dem_EventIdType EventId);
extern FUNC(uint16, DEM_CODE) DemCfg_GetFirstExtendedRecord(Dem_EventIdType EventId);
extern FUNC(uint16, DEM_CODE) DemCfg_GetCountOfCurrentExtendedRecord(Dem_EventIdType EventId);
extern FUNC(uint8, DEM_CODE) DemCfg_GetExtendedRecordNumber(uint16 ExtRecIdx);
extern FUNC(uint16, DEM_CODE) DemCfg_GetExtendedRecordNumberDataSize(uint16 ExtRecIdx);
extern FUNC(uint16, DEM_CODE) DemCfg_GetMirExtendedRecordNumberDataSize(uint16 ExtRecIdx);
extern FUNC(uint16, DEM_CODE) DemCfg_GetExtendedRecordFuncRef(uint16 ExtRecIdx);
extern FUNC(uint32, DEM_CODE) DemCfg_GetEventIdentityVariant(Dem_EventIdType EventId);


#define DEM_STOP_SEC_CODE
#include "MemMap.h"

/* END of Checksum include for
  - Diag_AsrDemLinktimeCRC */



#endif /* DEM_LCFG_H */

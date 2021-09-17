/* -----------------------------------------------------------------------------
  Filename:    v_cfg.h
  Description: Toolversion: 05.00.17.01.30.06.60.01.00.00
               
               Serial Number: CBD1300660
               Customer Info: Nexteer Automotive Corporation
                              Package: CBD Psa SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyVcfgNameDecorator
               
               Configuration   : C:\Component\PSA\PSA_CMP_04.00.00FreshStrt\PSA_CMP_EPS_TMS570\Tools\AsrProject\Config\System\EPS.gny
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "Channel0":
                       Databasefile: C:\Component\PSA\PSA_CMP_04.00.00FreshStrt\PSA_CMP_EPS_TMS570\Tools\AsrProject\Config\System\PSA_BMPV.dbc
                       Bussystem:    CAN
                       Manufacturer: PSA
                       Node:         PSCM

  Generated by , 2017-03-04  14:44:55
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

#if !defined(__V_CFG_H__)
#define __V_CFG_H__

#ifndef VGEN_GENY
#define VGEN_GENY
#endif

#ifndef GENy
#define GENy
#endif

#ifndef SUPPLIER_CANBEDDED
#define SUPPLIER_CANBEDDED                   30
#endif

/* -----------------------------------------------------------------------------
    &&&~ General Switches
 ----------------------------------------------------------------------------- */

#ifndef V_OSTYPE_OSEK
#define V_OSTYPE_OSEK
#endif



/* -----------------------------------------------------------------------------
    &&&~ Processor specific
 ----------------------------------------------------------------------------- */

#ifndef C_CPUTYPE_32BIT
#define C_CPUTYPE_32BIT
#endif


#ifndef V_CPUTYPE_BITARRAY_32BIT
#define V_CPUTYPE_BITARRAY_32BIT
#endif


#ifndef C_CPUTYPE_BIGENDIAN
#define C_CPUTYPE_BIGENDIAN
#endif


#ifndef C_CPUTYPE_BITORDER_MSB2LSB
#define C_CPUTYPE_BITORDER_MSB2LSB
#endif


#ifndef V_DISABLE_USE_DUMMY_FUNCTIONS
#define V_DISABLE_USE_DUMMY_FUNCTIONS
#endif


#ifndef V_ENABLE_USE_DUMMY_STATEMENT
#define V_ENABLE_USE_DUMMY_STATEMENT
#endif


#ifndef C_COMP_TI_TMS470_DCAN
#define C_COMP_TI_TMS470_DCAN
#endif


#ifndef V_CPU_TMS470
#define V_CPU_TMS470
#endif

#ifndef V_COMP_TI
#define V_COMP_TI
#endif

#ifndef V_COMP_TI_TMS470
#define V_COMP_TI_TMS470
#endif

#ifndef V_PROCESSOR_TI_TMS470_LS30316U
#define V_PROCESSOR_TI_TMS470_LS30316U
#endif


#ifndef C_PROCESSOR_TI_TMS470_LS30316U
#define C_PROCESSOR_TI_TMS470_LS30316U
#endif




/* -----------------------------------------------------------------------------
    &&&~ Used Modules
 ----------------------------------------------------------------------------- */

#define VGEN_ENABLE_XCP
#define VGEN_ENABLE_DIAG_CANDESC_UDS
#define VGEN_ENABLE_CANDESC_UDS
#ifndef VGEN_ENABLE_VSTDLIB
#define VGEN_ENABLE_VSTDLIB
#endif

#ifndef VSTD_ENABLE_OSEK_INTCTRL
#define VSTD_ENABLE_OSEK_INTCTRL
#endif

#ifndef VSTD_DISABLE_DEBUG_SUPPORT
#define VSTD_DISABLE_DEBUG_SUPPORT
#endif

#ifndef VSTD_ENABLE_LIBRARY_FUNCTIONS
#define VSTD_ENABLE_LIBRARY_FUNCTIONS
#endif


#define VGEN_ENABLE_CAN_DRV
#define C_ENABLE_CAN_CHANNELS
#define V_BUSTYPE_CAN
#define VGEN_ENABLE_IL_VECTOR
#define VGEN_ENABLE_TP_ISO_MC


#ifndef kVNumberOfIdentities
#define kVNumberOfIdentities                 1
#endif

#ifndef tVIdentityMsk
#define tVIdentityMsk                        vuint8
#endif

#ifndef kVIdentityIdentity_0
#define kVIdentityIdentity_0                 (vuint8) 0
#endif

#ifndef VSetActiveIdentity
#define VSetActiveIdentity(identityLog)
#endif

#ifndef V_ACTIVE_IDENTITY_MSK
#define V_ACTIVE_IDENTITY_MSK                1
#endif

#ifndef V_ACTIVE_IDENTITY_LOG
#define V_ACTIVE_IDENTITY_LOG                0
#endif


#define DIAG_API_CALL_TYPE
#define DIAG_API_CALLBACK_TYPE
#define DIAG_INTERNAL_CALL_TYPE
#define TP_API_CALL_TYPE
#define TP_API_CALLBACK_TYPE
#define TP_INTERNAL_CALL_TYPE

/* -----------------------------------------------------------------------------
    &&&~ Optimization
 ----------------------------------------------------------------------------- */

#ifndef V_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define V_ATOMIC_BIT_ACCESS_IN_BITFIELD      STD_OFF
#endif

#ifndef V_ATOMIC_VARIABLE_ACCESS
#define V_ATOMIC_VARIABLE_ACCESS             32
#endif




#ifndef VGEN_ENABLE_VSTDLIB
/* Diag_CanDesc requires VSTDLIB */
#define VGEN_ENABLE_VSTDLIB
#endif

#ifndef C_CLIENT_PSA
#define C_CLIENT_PSA
#endif

#ifndef __PSCM__
#define __PSCM__
#endif

/* -----------------------------------------------------------------------------
    &&&~ Compatibility defines for ComSetCurrentECU
 ----------------------------------------------------------------------------- */

#define kComNumberOfNodes                    kVNumberOfIdentities
#define ComSetCurrentECU                     VSetActiveIdentity
#define comMultipleECUCurrent                vActiveIdentityLog


#define C_VERSION_REF_IMPLEMENTATION         0x150


#ifndef VGEN_ENABLE_VSTDLIB
/* DrvCan__baseRi15 requires VSTDLIB */
#define VGEN_ENABLE_VSTDLIB
#endif

#ifndef VGEN_ENABLE_VSTDLIB
#define VGEN_ENABLE_VSTDLIB
#endif


#ifndef VGEN_ENABLE_VSTDLIB
/* TpMC requires VSTDLIB */
#define VGEN_ENABLE_VSTDLIB
#endif



/* disable magic number check for support of multiple projects */
#ifndef SKIP_MAGIC_NUMBER
#define SKIP_MAGIC_NUMBER
#endif

#include "v_cfg_1.h"

#endif /* __V_CFG_H__ */

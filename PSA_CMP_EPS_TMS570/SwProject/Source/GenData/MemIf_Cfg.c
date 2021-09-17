/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2011 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  MemIf_Cfg.c
 *    Component:  If_AsrIfMem
 *       Module:  MemIf
 *    Generator:  EAD
 *
 *  Description:  The Memory Abstraction Interface provides uniform access to services of underlying
 *                Memory Hardware abstraction (MemHwA) modules, i.e. EEPROM Abstraction (EA) and
 *                Flash EEPROM Emulation (FEE). The appropriate MemHwA module is selected by a device index.
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
    Project:    EPS.ecuc
    Generated:  2014-01-31 04:28 pm
    Licensee:   Vector AUTOSAR Basic Software (MICROSAR)
 
    This file is generated by DaVinci Configurator Base - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Tobias Schmid                 Tsd           Vector Informatik GmbH
 *  Manfred Duschinger            Du            Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.02.00  -           Tsd     -             first production release
 *  02.00.00  2008-04-09  Tsd     -             update for AUTOSAR Release 3.0
 *  02.01.00  2008-09-15  Rsu     -             Supporting 2 Fee instances in NvM
 *  02.01.02  2011-01-20  Du      -             Updated Cfg version to xml files
 *********************************************************************************************************************/

/*---- Includes ------------------------------------------------------------*/
#include "Std_Types.h"
#include "MemIf.h"

/*---- Version Identification ----------------------------------------------*/
#define MEMIF_CFG_C_MAJOR_VERSION (2u)
#define MEMIF_CFG_C_MINOR_VERSION (1u)
#define MEMIF_CFG_C_PATCH_VERSION (2u)

#if      ( (MEMIF_CFG_MAJOR_VERSION != MEMIF_CFG_C_MAJOR_VERSION) \
        || (MEMIF_CFG_MINOR_VERSION != MEMIF_CFG_C_MINOR_VERSION) )
  #error "Version numbers of MemIf_Cfg.c and MemIf_Cfg.h are inconsistent!"
#endif


/*---- CFG Structures ------------------------------------------------------*/
#define MEMIF_START_SEC_CONST_8BIT
#include "MemMap.h"

  CONST(uint8, MEMIF_CONST) MemIf_NumberOfDevices_u8 = MEMIF_NUMBER_OF_DEVICES;

#define MEMIF_STOP_SEC_CONST_8BIT
#include "MemMap.h"

#define MEMIF_START_SEC_CONST_32BIT
#include "MemMap.h"
    CONST(MemIf_MemHwAApi_Type, MEMIF_CONST) \
                MemIf_MemHwaApis_at[MEMIF_NUMBER_OF_DEVICES] =
    {
        /*<MEMIF_EA_API/>*/
		/*<MEMIF_EA30INST2_API/>*/
		/*<MEMIF_EABASIC_API/>*/
		/*<MEMIF_EA30STUB1_API/>*/
		/*<MEMIF_EA30STUB2_API/>*/
        /*<MEMIF_EAEXT_API/>*/
        
    {    /* Fee */
        Fee_SetMode,
        Fee_Read,
        Fee_Write,
        Fee_EraseImmediateBlock,
        Fee_InvalidateBlock,
        Fee_Cancel,
        Fee_GetStatus,
        Fee_GetJobResult
    }

        /*<MEMIF_FEE30STUB1_API/>*/
		/*<MEMIF_FEE30STUB2_API/>*/
		/*<MEMIF_FEE30INST2_API/>*/
        /*<MEMIF_FEEEXT_API/>*/
    };
    
#define MEMIF_STOP_SEC_CONST_32BIT
#include "MemMap.h"
        

/*---- End of File ---------------------------------------------------------*/


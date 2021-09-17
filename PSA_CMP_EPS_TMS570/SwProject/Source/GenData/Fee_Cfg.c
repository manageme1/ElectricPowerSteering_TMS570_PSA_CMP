/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Fee_Cfg.c
 *      Project:  If_AsrIfFeeTiSub
 *       Module:  Fee - Submodule Cfg (configuration)
 *    Generator:  -
 *
 *  Description:  Configuration objects (pre-compile)
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  GENERATION INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *     Project:    EPS.ecuc
 *   Generated:  2018-03-08 08:39 am
 *    Licensee:   Nexteer Automotive Corporation (2502600608)
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Fee.h"
#include "Fee_Cbk.h"
#include "SchM_Fee.h"



/**********************************************************************************************************************
 *  VERSION CHECKS
 *********************************************************************************************************************/
#if (     (FEE_CFG_MAJOR_VERSION != (2U)) \
       || (FEE_CFG_MINOR_VERSION != (4U)))
  #error "Version numbers of Fee_Cfg.c and Fee_Cfg.h are inconsistent!"
#endif


/* Virtual Sector Configuration */
#if (FEE_GENERATE_DEVICEANDVIRTUALSECTORSTRUC == STD_OFF)
const Fee_VirtualSectorConfigType Fee_VirtualSectorConfiguration[] =
{
    
    
    /* Dummy entry just to produce a valid C-sequence (the array is ignored as FEE_GENERATE_DEVICEANDVIRTUALSECTORSTRUC == STD_ON) */
    {
        1,    /* Virtual sector number */
        7,    /* Bank */
        (Fapi_FlashSectorType)0,    /* Start Sector */
        (Fapi_FlashSectorType)0     /* End Sector */
    },


};
#endif


/* Block Configuration */
const Fee_BlockConfigType Fee_BlockConfiguration[] =
{
        
    /* Block FeeBlockConfiguration_0 */
    {
        1,    /* Block number */
        0x0004,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        2,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_1 */
    {
        2,    /* Block number */
        0x000A,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_2 */
    {
        3,    /* Block number */
        0x1006,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_3 */
    {
        4,    /* Block number */
        0x0008,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_4 */
    {
        5,    /* Block number */
        0x0004,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_5 */
    {
        6,    /* Block number */
        0x0001,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_6 */
    {
        7,    /* Block number */
        0x0004,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_7 */
    {
        8,    /* Block number */
        0x0004,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_8 */
    {
        9,    /* Block number */
        0x000C,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_9 */
    {
        10,    /* Block number */
        0x0040,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_10 */
    {
        11,    /* Block number */
        0x0002,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_11 */
    {
        12,    /* Block number */
        0x003C,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_12 */
    {
        13,    /* Block number */
        0x00C0,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_13 */
    {
        14,    /* Block number */
        0x0006,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_14 */
    {
        15,    /* Block number */
        0x0004,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_15 */
    {
        16,    /* Block number */
        0x0004,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_16 */
    {
        17,    /* Block number */
        0x0010,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_17 */
    {
        18,    /* Block number */
        0x003C,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_18 */
    {
        19,    /* Block number */
        0x0064,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_19 */
    {
        20,    /* Block number */
        0x0032,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_20 */
    {
        21,    /* Block number */
        0x0032,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_21 */
    {
        22,    /* Block number */
        0x0001,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_22 */
    {
        23,    /* Block number */
        0x0005,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_23 */
    {
        24,    /* Block number */
        0x000B,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_24 */
    {
        25,    /* Block number */
        0x0003,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_25 */
    {
        26,    /* Block number */
        0x0016,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_26 */
    {
        27,    /* Block number */
        0x000D,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_27 */
    {
        28,    /* Block number */
        0x0003,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_28 */
    {
        29,    /* Block number */
        0x0001,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_29 */
    {
        30,    /* Block number */
        0x0001,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_30 */
    {
        31,    /* Block number */
        0x001A,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_31 */
    {
        32,    /* Block number */
        0x0062,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_32 */
    {
        33,    /* Block number */
        0x001E,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_33 */
    {
        34,    /* Block number */
        0x0402,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_34 */
    {
        35,    /* Block number */
        0x0016,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_35 */
    {
        36,    /* Block number */
        0x0008,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_36 */
    {
        37,    /* Block number */
        0x000A,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_37 */
    {
        38,    /* Block number */
        0x000E,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_38 */
    {
        39,    /* Block number */
        0x00CE,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_39 */
    {
        40,    /* Block number */
        0x0060,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_40 */
    {
        41,    /* Block number */
        0x0005,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_41 */
    {
        42,    /* Block number */
        0x04B0,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_42 */
    {
        43,    /* Block number */
        0x047F,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_43 */
    {
        44,    /* Block number */
        0x0005,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_44 */
    {
        45,    /* Block number */
        0x04C9,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_45 */
    {
        46,    /* Block number */
        0x0006,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_46 */
    {
        47,    /* Block number */
        0x0004,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_47 */
    {
        48,    /* Block number */
        0x0007,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_48 */
    {
        49,    /* Block number */
        0x0003,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_49 */
    {
        50,    /* Block number */
        0x000A,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_50 */
    {
        51,    /* Block number */
        0x000A,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_51 */
    {
        52,    /* Block number */
        0x0008,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        0     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_52 */
    {
        53,    /* Block number */
        0x000A,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },
    
    /* Block FeeBlockConfiguration_53 */
    {
        54,    /* Block number */
        0x0004,    /* Block size */
        FALSE,    /* immediate data */
        1,    /* number of write cycles */
        0,    /* Device Index */
        1,    /* Number Of Datasets */
        1     /* EEP Number */
    },


};


/* ---- End of File ------------------------------------------------------- */

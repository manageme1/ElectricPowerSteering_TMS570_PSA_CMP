
#ifndef TCB_H
#define TCB_H

#define TWrapS_XcpWriteAp0 0u
void TRUSTED_TWrapS_XcpWriteAp0(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_CallFblStart 1u
void TRUSTED_TWrapS_CallFblStart(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Adc_Init 2u
void TRUSTED_TWrapS_Adc_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Adc2_Init1 3u
void TRUSTED_TWrapS_Adc2_Init1(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_PwmCdd_Init 4u
void TRUSTED_TWrapS_PwmCdd_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_StaMd_Init0 5u
void TRUSTED_TWrapS_StaMd_Init0(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Wdg_TMS570LS3x_Init 6u
void TRUSTED_TWrapS_Wdg_TMS570LS3x_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_WdgM_Init 7u
void TRUSTED_TWrapS_WdgM_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_NvMProxy_Init 8u
void TRUSTED_TWrapS_NvMProxy_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_FeeIf_Init 9u
void TRUSTED_TWrapS_FeeIf_Init(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_MainFunction 10u
void TRUSTED_TWrapS_Fee_MainFunction(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_Read 11u
void TRUSTED_TWrapS_Fee_Read(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_Write 12u
void TRUSTED_TWrapS_Fee_Write(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_EraseImmediateBlock 13u
void TRUSTED_TWrapS_Fee_EraseImmediateBlock(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_InvalidateBlock 14u
void TRUSTED_TWrapS_Fee_InvalidateBlock(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_Cancel 15u
void TRUSTED_TWrapS_Fee_Cancel(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_GetStatus 16u
void TRUSTED_TWrapS_Fee_GetStatus(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Fee_GetJobResult 17u
void TRUSTED_TWrapS_Fee_GetJobResult(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_uDiagVIM_RednRpdShtdn 18u
void TRUSTED_TWrapS_uDiagVIM_RednRpdShtdn(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_uDiagECC_RednRpdShtdn 19u
void TRUSTED_TWrapS_uDiagECC_RednRpdShtdn(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_Dma_InvalidateSlowADCGroup 20u
void TRUSTED_TWrapS_Dma_InvalidateSlowADCGroup(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define TWrapS_ProcessF0FF 21u
void TRUSTED_TWrapS_ProcessF0FF(TrustedFunctionIndexType FunctionIndex, TrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_XcpWriteAp6 0
void NONTRUSTED_NtWrapS_XcpWriteAp6(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_Dem_ClearDTC 1
void NONTRUSTED_NtWrapS_Dem_ClearDTC(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_SrlComDriver_SCom_ElecIntStart 2
void NONTRUSTED_NtWrapS_SrlComDriver_SCom_ElecIntStart(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_SrlComDriver_SCom_ElecIntStop 3
void NONTRUSTED_NtWrapS_SrlComDriver_SCom_ElecIntStop(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_SrlComDriver_SCom_SendMsgOnChange 4
void NONTRUSTED_NtWrapS_SrlComDriver_SCom_SendMsgOnChange(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_XcpWriteAp9 5
void NONTRUSTED_NtWrapS_XcpWriteAp9(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_ActivePull_SCom_SetLTComp 6
void NONTRUSTED_NtWrapS_ActivePull_SCom_SetLTComp(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_ActivePull_SCom_SetSTComp 7
void NONTRUSTED_NtWrapS_ActivePull_SCom_SetSTComp(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AvgFricLrn_SCom_ResetToZero 8
void NONTRUSTED_NtWrapS_AvgFricLrn_SCom_ResetToZero(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AvgFricLrn_SCom_InitLearnedTables 9
void NONTRUSTED_NtWrapS_AvgFricLrn_SCom_InitLearnedTables(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AvgFricLrn_SCom_SetSelect 10
void NONTRUSTED_NtWrapS_AvgFricLrn_SCom_SetSelect(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AvgFricLrn_SCom_SetOffsetOutputDefeat 11
void NONTRUSTED_NtWrapS_AvgFricLrn_SCom_SetOffsetOutputDefeat(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AvgFricLrn_SCom_SetEOLFric 12
void NONTRUSTED_NtWrapS_AvgFricLrn_SCom_SetEOLFric(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_BatteryVoltage_SCom_ClearTransOvData 13
void NONTRUSTED_NtWrapS_BatteryVoltage_SCom_ClearTransOvData(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_IoHwAb_Adc_ResetAdcEnable 14
void NONTRUSTED_NtWrapS_IoHwAb_Adc_ResetAdcEnable(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_LrnEOT_Scom_ResetEOT 15
void NONTRUSTED_NtWrapS_LrnEOT_Scom_ResetEOT(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_VehDyn_SCom_ResetCenter 16
void NONTRUSTED_NtWrapS_VehDyn_SCom_ResetCenter(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_XcpWriteAp10 17
void NONTRUSTED_NtWrapS_XcpWriteAp10(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AbsHwPos_SCom_CustClrTrim 18
void NONTRUSTED_NtWrapS_AbsHwPos_SCom_CustClrTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AbsHwPos_SCom_CustSetTrim 19
void NONTRUSTED_NtWrapS_AbsHwPos_SCom_CustSetTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AbsHwPos_SCom_NxtClearTrim 20
void NONTRUSTED_NtWrapS_AbsHwPos_SCom_NxtClearTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AbsHwPos_SCom_NxtSetTrim 21
void NONTRUSTED_NtWrapS_AbsHwPos_SCom_NxtSetTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_AstLmt_Scom_ManualTrqCmd 22
void NONTRUSTED_NtWrapS_AstLmt_Scom_ManualTrqCmd(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_Polarity_SCom_SetPolarity 23
void NONTRUSTED_NtWrapS_Polarity_SCom_SetPolarity(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_SCom_EOLNomMtrParam_Set 24
void NONTRUSTED_NtWrapS_SCom_EOLNomMtrParam_Set(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_SrlComInput_SCom_ManualVehSpd 25
void NONTRUSTED_NtWrapS_SrlComInput_SCom_ManualVehSpd(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_SrlComInput_SCom_ResetTimers 26
void NONTRUSTED_NtWrapS_SrlComInput_SCom_ResetTimers(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_SrlComInput_SCom_VehSpdControl 27
void NONTRUSTED_NtWrapS_SrlComInput_SCom_VehSpdControl(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_TrqCanc_Scom_SetCogTrqCal 28
void NONTRUSTED_NtWrapS_TrqCanc_Scom_SetCogTrqCal(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_TrqCmdScl_SCom_Set 29
void NONTRUSTED_NtWrapS_TrqCmdScl_SCom_Set(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_HwTqArbn_SCom_ClrTrqTrim 30
void NONTRUSTED_NtWrapS_HwTqArbn_SCom_ClrTrqTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_HwTqArbn_SCom_SetTrqTrim 31
void NONTRUSTED_NtWrapS_HwTqArbn_SCom_SetTrqTrim(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_HwTqArbn_SCom_WriteData 32
void NONTRUSTED_NtWrapS_HwTqArbn_SCom_WriteData(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_PsaAgArbn_SCom_PsaAaCmd 33
void NONTRUSTED_NtWrapS_PsaAgArbn_SCom_PsaAaCmd(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_XcpWriteAp11 34
void NONTRUSTED_NtWrapS_XcpWriteAp11(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_CmMtrCurr_SCom_CalGain 35
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_CalGain(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_CmMtrCurr_SCom_CalOffset 36
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_CalOffset(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);
#define NtWrapS_CmMtrCurr_SCom_SetMtrCurrCals 37
void NONTRUSTED_NtWrapS_CmMtrCurr_SCom_SetMtrCurrCals(NonTrustedFunctionIndexType FunctionIndex, NonTrustedFunctionParameterRefType FunctionParams);

#endif
/******************************************************************************
 *
 * Module: PduR
 *
 * File Name: PduR_SoAd.c
 *
 * Description: Source file for PduR_SoAd.
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/

#include "PduR_SoAd.h"
#include "PduR_Pbcfg.h"
#include "PduR_Cfg.h"
#include "ChrgM.h"
#include "Det.h"



#if(PduR_SoAdIfRxIndication_Supported)

void PduR_SoAdIfRxIndication (PduIdType RxPduId,const PduInfoType* PduInfoPtr){

	uint8 PduRRoutingPathIndex;
	Std_ReturnType result=E_OK;
	if ( PduRState  == PDUR_ONLINE) {
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++)
		{
			if (PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == RxPduId)
			{
				return ChrgM_V2GTpRxIndication( PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId, result);
			}
			else
			{
				/*MISRA Rule*/
			}
		}

	}
	else
	{
#if PduRDevErrorDetect
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, PduR_SoAdRxIndication_SID, PDUR_E_UNINIT );

#endif
		return;
	}


}

#endif




#if(PduR_SoADTpCpyTxData_Supported)

BufReq_ReturnType PduR_SoAdTpCopyTxData (PduIdType id,const PduInfoType* info,const RetryInfoType* retry,PduLengthType* availableDataPtr){

	uint8 PduRRoutingPathIndex;

	if ( PduRState  == PDUR_ONLINE) {
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++)
		{
			if (PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == id)
			{
				return ChrgM_V2GTpCopyTxData (PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId,info, retry,availableDataPtr);
			}
			else
			{
				/*MISRA Rule*/
			}
		}

	}
	else
	{
#if PduRDevErrorDetect
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, PduR_SoAdTpCopyTxData_SID, PDUR_E_UNINIT );

#endif
		return BUFREQ_E_NOT_OK;
	}

return BUFREQ_OK;
}

#endif





#if(PduR_SoADTxConfirmation_Supported)

void PduR_SoAdTpTxConfirmation (PduIdType id,Std_ReturnType result){

	uint8 PduRRoutingPathIndex;

	if ( PduRState  == PDUR_ONLINE) {
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++)
		{
			if (PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == id)
			{
				return ChrgM_V2GTpTxConfirmation ( PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId, result);
			}
			else
			{
				/*MISRA Rule*/
			}
		}

	}
	else
	{
#if PduRDevErrorDetect
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, PduR_SoAdTpTxConfirmation_SID, PDUR_E_UNINIT );

#endif
		return;
	}


}

#endif







#if(PduR_SoAdTpStartOfReceiption_Supported)

BufReq_ReturnType PduR_SoAdTpStartOfReception (PduIdType id,const PduInfoType* info,PduLengthType TpSduLength,PduLengthType* bufferSizePtr){

	uint8 PduRRoutingPathIndex;

	if ( PduRState  == PDUR_ONLINE) {
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++)
		{
			if (PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == id)
			{
				return ChrgM_V2GTpStartOfReception ( PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId  , info, TpSduLength, bufferSizePtr);
			}
			else
			{
				/*MISRA Rule*/
			}
		}

	}
	else
	{
#if PduRDevErrorDetect
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, PduR_SoAdTpStartOfReception_SID, PDUR_E_UNINIT );

#endif
		return BUFREQ_E_NOT_OK;
	}

return BUFREQ_OK;
}

#endif


#if(PduR_SoAdTpCopyRxData_Supported)

BufReq_ReturnType PduR_SoAdTpCopyRxData (PduIdType id,const PduInfoType* info,PduLengthType* bufferSizePtr){

	uint8 PduRRoutingPathIndex;

	if ( PduRState  == PDUR_ONLINE) {
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++)
		{
			if (PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == id)
			{
				return  ChrgM_V2GTpCopyRxData ( PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId , info,bufferSizePtr);
			}
			else
			{
				/*MISRA Rule*/
			}
		}

	}
	else
	{
#if PduRDevErrorDetect
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, PduR_SoAdTpCopyRxData_SID, PDUR_E_UNINIT );

#endif
		return BUFREQ_E_NOT_OK;
	}
	return BUFREQ_OK;

}

#endif

#if(PduR_SoAdTpRxIndication_Supported)

void PduR_SoAdTpRxIndication (PduIdType id,Std_ReturnType result){

	uint8 PduRRoutingPathIndex;

	if ( PduRState  == PDUR_ONLINE) {
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++)
		{
			if (PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == id)
			{
				return ChrgM_V2GTpRxIndication( PduR.PduRRoutingTables.PduRRoutingTable[SoAd_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId, result);
			}
			else
			{
				/*MISRA Rule*/
			}
		}

	}
	else
	{
#if PduRDevErrorDetect
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, PduR_SoAdRxIndication_SID, PDUR_E_UNINIT );

#endif
		return;
	}


}

#endif

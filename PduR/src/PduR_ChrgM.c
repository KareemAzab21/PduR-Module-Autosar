/******************************************************************************
 *
 * Module: PduR
 *
 * File Name: PduR_ChrgM.c
 *
 * Description: Source file for PduR_ChrgM.
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/
#include "PduR_ChrgM.h"

#include "PduR_Pbcfg.h"
#include "PduR_Cfg.h"
#include "SoAd.h"
#include <stddef.h>

/*********************************************************************
 *
 * Configurable interfaces definitions for interaction with upper
 * layer module.
 *
 *********************************************************************/




/*
 * [SWS_PduR_00406]
 * Description : Requests Transmission of PDU
 */
Std_ReturnType PduR_ChrgMTransmit(PduIdType TxPduId,const PduInfoType* PduInfoPtr){

	Std_ReturnType returnValue = E_NOT_OK;
	if(PduRState == PDUR_ONLINE){
		uint8 PduRRoutingPathIndex;
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++){
			if (PduR.PduRRoutingTables.PduRRoutingTable[ChargM_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == TxPduId)
				{
					returnValue =  SoAd_IfTransmit(PduR.PduRRoutingTables.PduRRoutingTable[ChargM_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId,PduInfoPtr);
				}
			else
				{
					/*MISRA Rule*/
				}
			}
	}
	else{

	}
	return returnValue;
}

/*
 * [SWS_PduR_00769]
 * Description : Requests cancellation of an ongoing transmission of a PDU in a lower layer communication module.
 */
Std_ReturnType PduR_ChrgMCancelTransmit (PduIdType TxPduId){
	Std_ReturnType returnValue = E_NOT_OK;
	if(PduRState == PDUR_ONLINE){
		uint8 PduRRoutingPathIndex;
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++){
			if (PduR.PduRRoutingTables.PduRRoutingTable[ChargM_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == TxPduId)
				{
					returnValue =  SoAd_TpCancelTransmit(PduR.PduRRoutingTables.PduRRoutingTable[ChargM_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId);
				}
			else
				{
					/*MISRA Rule*/
				}
			}
	}
	else{

	}
	return returnValue;
}

/*
 * [SWS_PduR_00767]
 * Description : Requests cancellation of an ongoing reception of a PDU in a lower layer transport protocol module.
 */
Std_ReturnType PduR_ChrgMCancelReceive (PduIdType RxPduId){
	Std_ReturnType returnValue = E_NOT_OK;
	if(PduRState == PDUR_ONLINE){
		uint8 PduRRoutingPathIndex;
		for (PduRRoutingPathIndex = 0; PduRRoutingPathIndex < PduRMaxRoutingPathCnt; PduRRoutingPathIndex++){
			if (PduR.PduRRoutingTables.PduRRoutingTable[ChargM_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRSrcPdu.PduRSourcePduHandleId == RxPduId)
				{
					returnValue =  SoAd_TpCancelReceive(PduR.PduRRoutingTables.PduRRoutingTable[ChargM_RoutingTable_ID].PduRRoutingPath[PduRRoutingPathIndex].PduRDestPdu[0].PduRDestPduHandleId);
				}
			else
				{
					/*MISRA Rule*/
				}
			}
	}
	else{

	}
	return returnValue;
}

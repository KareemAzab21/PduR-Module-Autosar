/******************************************************************************
 *
 * Module: ChargM
 *
 * File Name: ChargM.c
 *
 * Description: Stub for PduR
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/

#include "ChrgM.h"




void ChrgM_V2GTpRxIndication (PduIdType id,Std_ReturnType result){}
BufReq_ReturnType ChrgM_V2GTpCopyTxData (PduIdType id,const PduInfoType* info,const RetryInfoType* retry,PduLengthType* availableDataPtr){}
BufReq_ReturnType ChrgM_V2GTpCopyRxData (PduIdType id,const PduInfoType* info,PduLengthType* bufferSizePtr){}
BufReq_ReturnType ChrgM_V2GTpStartOfReception (   PduIdType id,const PduInfoType* info,PduLengthType TpSduLength,PduLengthType* bufferSizePtr){}
void ChrgM_V2GTpTxConfirmation (PduIdType id,Std_ReturnType result){}


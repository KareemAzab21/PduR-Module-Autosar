/******************************************************************************
 *
 * Module: PduR
 *
 * File Name: PduR_SoAd.h
 *
 * Description: Header file for Pdu_SoAd.
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/
#ifndef PDUR_SOAD_H_
#define PDUR_SOAD_H_

#include "PduR.h"




#define PduR_SoAdRxIndication_SID				(uint8)0x42
#define	PduR_SoAdTpStartOfReception_SID 		(uint8)0x46
#define PduR_SoAdTpCopyTxData_SID				(uint8)0x43
#define PduR_SoAdTpCopyRxData_SID				(uint8)0x44
#define PduR_SoAdTpTxConfirmation_SID    		(uint8)0x48



#if (PduRZeroCostOperation == STD_OFF) && (PduR_SoAD_Supported == TRUE)


void PduR_SoAdIfRxIndication (PduIdType RxPduId,const PduInfoType* PduInfoPtr);

BufReq_ReturnType PduR_SoAdTpStartOfReception (PduIdType id,const PduInfoType* info,PduLengthType TpSduLength,PduLengthType* bufferSizePtr);
BufReq_ReturnType PduR_SoAdTpCopyTxData (PduIdType id,const PduInfoType* info,const RetryInfoType* retry,PduLengthType* availableDataPtr);
BufReq_ReturnType PduR_SoAdTpCopyRxData (PduIdType id,const PduInfoType* info,PduLengthType* bufferSizePtr);
void PduR_SoAdTpRxIndication (PduIdType id,Std_ReturnType result);
void PduR_SoAdTpTxConfirmation (PduIdType id,Std_ReturnType result);

#endif




#endif /* PDUR_SOAD_H_ */

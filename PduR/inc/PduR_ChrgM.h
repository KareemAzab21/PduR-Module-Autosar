/******************************************************************************
 *
 * Module: PduR
 *
 * File Name: PduR_ChrgM.h
 *
 * Description: Header file for Pdu_ChargM.
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/
#ifndef PDUR_CHRGM_H_
#define PDUR_CHRGM_H_


#include "PduR.h"


#if (PduRZeroCostOperation== STD_OFF) && (PduR_ChrgM_Supported == TRUE)

//void PduR_ChrgMInit(PduR_PBConfigType* ConfigPtr);
Std_ReturnType PduR_ChrgMTransmit (PduIdType TxPduId, const PduInfoType* PduInfoPtr);
Std_ReturnType PduR_ChrgMCancelTransmit (PduIdType TxPduId);
Std_ReturnType PduR_ChrgMCancelReceive (PduIdType RxPduId);

#endif


#endif /* PDUR_CHRGM_H_ */

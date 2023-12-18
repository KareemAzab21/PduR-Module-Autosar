/******************************************************************************
 *
 * Module: SoAd
 *
 * File Name: SoAd.h
 *
 * Description: Stub for PduR
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/

#ifndef SOAD_H_
#define SOAD_H_



#include "Std_Types.h"
#include "ComStack_Types.h"



Std_ReturnType SoAd_IfTransmit (PduIdType TxPduId,const PduInfoType* PduInfoPtr);
Std_ReturnType SoAd_TpCancelTransmit (PduIdType TxPduId);
Std_ReturnType SoAd_TpCancelReceive (PduIdType RxPduId);



#endif /* SOAD_H_ */

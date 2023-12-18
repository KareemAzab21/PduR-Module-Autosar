/******************************************************************************
 *
 * Module: PduR
 *
 * File Name: PduR_Cfg.h
 *
 * Description: Header file Pre-Compile Configurations.
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/
#ifndef PDUR_CFG_H_
#define PDUR_CFG_H_


/******************************************************************************************
****************************************PduR Module****************************************
********************************Pre-Compile Configurations********************************
******************************************************************************************/




/****** Supported Modules ******/

#define PduR_ChrgM_Supported 				TRUE
#define PduR_SoAD_Supported  				TRUE





/*Supported APIs for ChrgM*/
#if (PduR_ChrgM_Supported == TRUE)

#define PDUR_ChrgMTransmit_Supported 					STD_ON

#endif




/*Supported APIs for SoAD*/
#if (PduR_SoAD_Supported==TRUE)

#define PduR_SoAdIfRxIndication_Supported 				STD_ON
#define PduR_SoADTpCpyTxData_Supported    				STD_ON
#define PduR_SoADTxConfirmation_Supported				STD_ON
#define PduR_SoAdTpStartOfReceiption_Supported 			STD_ON
#define PduR_SoAdTpCopyRxData_Supported         		STD_ON
#define PduR_SoAdTpRxIndication_Supported				STD_ON


#endif

/*PduRGeneral Pre-Compile Configuration Parameter*/
#define PduRDevErrorDetect					STD_ON
#define PduRVersionInfoApi					STD_ON
#define PduRIsEnabledAtInit  				STD_ON
#define PduRZeroCostOperation				STD_OFF




/*PduRRoutingPath Pre-Compile Configuration Parameter*/

#define PduRRoutingPathGroupId 			(uint16)0

#define PduRMaxRoutingPathCnt 			(uint16)1

#define PduRMaxRoutingTableCnt			(uint16)2








#endif /* PDUR_CFG_H_ */

 /******************************************************************************
 *
 * Module: Det
 *
 * File Name: Det.c
 *
 * Description:  Det stores the development errors reported by other modules.
 *               This source file is a STUB for the Det Module
 *
 * Author: Kareem Azab/ Alyeldeen Khaled
 ******************************************************************************/

#ifndef DET_H_
#define DET_H_


/*******************************************************************************
 *                              Includes Needed                                *
 *******************************************************************************/
/* Standard AUTOSAR types */
#include "Std_Types.h"



/*******************************************************************************
 *                      External Variables                                     *
 *******************************************************************************/
extern uint16 Det_ModuleId;       /*DET module ID*/
extern uint8 Det_InstanceId;      /*DET instance ID*/
extern uint8 Det_ApiId;           /* DET API ID*/
extern uint8 Det_ErrorId;         /* DET Error ID*/

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
Std_ReturnType Det_ReportError( uint16 ModuleId,
                      uint8 InstanceId,
                      uint8 ApiId,
		      uint8 ErrorId );




#endif /* DET_H_ */

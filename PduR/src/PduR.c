/******************************************************************************
 *
 * Module: PduR
 *
 * File Name: PduR.c
 *
 * Description: Source file for PduR.
 *
 * Author: Kareem Azab / Alyeldeen Khaled
 ******************************************************************************/
#include "PduR.h"
#include "Det.h"
#include <stddef.h>


#if !(((PDUR_SW_MAJOR_VERSION == PLATFORM_SW_MAJOR_VERSION)\
		&&(PDUR_SW_MINOR_VERSION == PLATFORM_SW_MINOR_VERSION)\
		&&(PDUR_SW_PATCH_VERSION == PLATFORM_SW_PATCH_VERSION)))
#error PduR: Expected BSW module version to be 1.2.*
#endif

#if !(((PDUR_AR_RELEASE_MAJOR_VERSION == PLATFORM_AR_RELEASE_MAJOR_VERSION)\
		&&(PDUR_AR_RELEASE_MINOR_VERSION == PLATFORM_AR_RELEASE_MINOR_VERSION)\
		&&(PDUR_AR_RELEASE_PATCH_VERSION == PLATFORM_AR_RELEASE_PATCH_VERSION)))
#error PduR: Expected AUTOSAR version to be 4.0.*
#endif


PduR_StateType PduRState = PDUR_UNINIT;
const PduR_PBConfigType* PduRConfig;

void PduR_Init(const PduR_PBConfigType* ConfigPtr){

	if (PduRState != PDUR_UNINIT) {
		#if PduRDevErrorDetect == STD_ON
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, 0x01, PDUR_E_UNINIT );
		#endif
		return;
	}

	if (ConfigPtr == NULL) {
		#if PduRDevErrorDetect == STD_ON
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, 0x00, PDUR_E_INIT_FAILED);
		#endif
		return;
	}
		PduRConfig = ConfigPtr;

        PduRState = PDUR_ONLINE;

}


void PduR_GetVersionInfo (Std_VersionInfoType* versionInfo){
	versionInfo->moduleID = (uint16)PDUR_MODULE_ID;
	versionInfo->vendorID = NULL;
    versionInfo->sw_major_version = PLATFORM_SW_MAJOR_VERSION;
    versionInfo->sw_minor_version = PLATFORM_SW_MINOR_VERSION;
    versionInfo->sw_patch_version = PLATFORM_SW_PATCH_VERSION;
    versionInfo->ar_major_version = PLATFORM_AR_RELEASE_MAJOR_VERSION;
    versionInfo->ar_minor_version = PLATFORM_AR_RELEASE_MINOR_VERSION;
    versionInfo->ar_patch_version = PLATFORM_AR_RELEASE_PATCH_VERSION;
}


uint16 PduR_GetConfigurationId (void) {
	return PduR_PBConfigId;
}


void PduR_EnableRouting(PduR_RoutingPathGroupIdType id){
	if(id == NULL){
		#if PduRDevErrorDetect  == STD_ON
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, 0x08, PDUR_E_ROUTING_PATH_GROUP_ID_INVALID);
		#endif
		return;
	}
	PduRState = PDUR_ONLINE;

}

void PduR_DisableRouting(PduR_RoutingPathGroupIdType id,boolean initialize){
	if(id == NULL){
		#if PduRDevErrorDetect  == STD_ON
		Det_ReportError(PDUR_MODULE_ID, PDUR_INSTANCE_ID, 0x08, PDUR_E_ROUTING_PATH_GROUP_ID_INVALID );
		#endif
		return;
	}
	PduRState = PDUR_UNINIT;

}








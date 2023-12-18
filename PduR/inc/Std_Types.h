/******************************************************************************
 *
 * Module: Common - Platform
 *
 * File Name: Std_Types.h
 *
 * Description: General type definitions
 *
 * Author: Kareem Azab/ Alyeldeen Khaled
 *
 *******************************************************************************/

#ifndef STD_TYPES_H
#define STD_TYPES_H

/*******************************************************************************
 *                             ID - Version Info                               *
 *******************************************************************************/
/* Id for the company in the AUTOSAR */
#define STD_TYPES_VENDOR_ID                                  (3312U)

/*
 * Module Version 1.0.0
 */
#define STD_TYPES_SW_MAJOR_VERSION                           (1U)
#define STD_TYPES_SW_MINOR_VERSION                           (0U)
#define STD_TYPES_SW_PATCH_VERSION                           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define STD_TYPES_AR_RELEASE_MAJOR_VERSION                   (4U)
#define STD_TYPES_AR_RELEASE_MINOR_VERSION                   (7U)
#define STD_TYPES_AR_RELEASE_PATCH_VERSION                   (0U)


/*******************************************************************************
 *                              Includes Needed                                *
 *******************************************************************************/
/* Standard Platform types */
#include "Platform_Types.h"

/* AUTOSAR checking between Std Types and Platform Modules */
#if ((PLATFORM_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION)\
 || (PLATFORM_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION)\
 || (PLATFORM_AR_RELEASE_PATCH_VERSION != STD_TYPES_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Platform_Types.h does not match the expected version"
#endif

/* Standard Compiler */
#include "Compiler.h"

/* AUTOSAR checking between Std Types and Compiler Modules */
#if ((COMPILER_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION)\
 || (COMPILER_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION)\
 || (COMPILER_AR_RELEASE_PATCH_VERSION != STD_TYPES_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Compiler.h does not match the expected version"
#endif

/*******************************************************************************
 *                             Types Deceleration	                       *
 *******************************************************************************/

/*
 *  Describes the standard Return Type Definitions used in the project
 */
typedef uint8  Std_ReturnType;

/*
 * Structure for the Version of the module.
 * This is requested by calling <Module name>_GetVersionInfo()
 */
typedef struct
{
  uint16  vendorID;
  uint16  moduleID;
  uint8 sw_major_version;
  uint8 sw_minor_version;
  uint8 sw_patch_version;
  uint8 ar_major_version;
  uint8 ar_minor_version;
  uint8 ar_patch_version;
} Std_VersionInfoType;

/*******************************************************************************
 *                          Pre-Processors Definition                          *
 *******************************************************************************/
#define STD_HIGH        0x01U       /* Standard HIGH */
#define STD_LOW         0x00U       /* Standard LOW */

#define STD_ACTIVE      0x01U       /* Logical state active */
#define STD_IDLE        0x00U       /* Logical state idle */

#define STD_ON          0x01U       /* Standard ON */
#define STD_OFF         0x00U       /* Standard OFF */

#define E_OK            ((Std_ReturnType)0x00U)      /* Function Return OK */
#define E_NOT_OK        ((Std_ReturnType)0x01U)      /* Function Return NOT OK */
   
#define ZERO             0



#endif /* STD_TYPES_H */

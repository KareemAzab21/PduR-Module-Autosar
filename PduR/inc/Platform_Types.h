 /******************************************************************************
 *
 * Module: Common - Platform Abstraction
 *
 * File Name: Platform_Types.h
 *
 *
 * Author: Kareem Azab  / Alyeldeen Khaled
 *
 *******************************************************************************/

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#include <stdbool.h>
#include <stdint.h>

/*******************************************************************************
 *                             ID - Version Info                               *
 *******************************************************************************/
/* Id for the company in the AUTOSAR */
#define PLATFORM_VENDOR_ID                         (3312U)

/*
 * Module Version 1.0.0
 */
#define PLATFORM_SW_MAJOR_VERSION                   (1U)
#define PLATFORM_SW_MINOR_VERSION                   (0U)
#define PLATFORM_SW_PATCH_VERSION                   (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PLATFORM_AR_RELEASE_MAJOR_VERSION           (4U)
#define PLATFORM_AR_RELEASE_MINOR_VERSION           (7U)
#define PLATFORM_AR_RELEASE_PATCH_VERSION           (0U)

/*******************************************************************************
 *                             Types Deceleration	                       *
 *******************************************************************************/

/*    Data type that represents True and False   */
typedef unsigned char         boolean;

typedef unsigned char         uint8;          /*           0 .. 255             */
typedef signed char           sint8;          /*        -128 .. +127            */
typedef unsigned short        uint16;         /*           0 .. 65535           */
typedef signed short          sint16;         /*      -32768 .. +32767          */
typedef unsigned long         uint32;         /*           0 .. 4294967295      */
typedef signed long           sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    uint64;         /*       0..18446744073709551615  */
typedef signed long long      sint64;         /* -9223372036854775808 .. 9223372036854775807 */
typedef float                 float32;
typedef double                float64;

typedef int8_t         		sint8;
typedef uint8_t       		uint8;
typedef char				char_t;
typedef int16_t        		sint16;
typedef uint16_t      		uint16;
//typedef int32_t         	sint32;
//typedef uint32_t       		uint32;
typedef int64_t  			sint64;
typedef uint64_t  			uint64;
typedef uint_least8_t       uint8_least;
typedef uint_least16_t      uint16_least;
typedef uint_least32_t      uint32_least;
typedef int_least8_t        sint8_least;
typedef int_least16_t       sint16_least;
typedef int_least32_t       sint32_least;
typedef float               float32;
typedef double              float64;

typedef volatile int8_t vint8_t;
typedef volatile uint8_t vuint8_t;

typedef volatile int16_t vint16_t;
typedef volatile uint16_t vuint16_t;

typedef volatile int32_t vint32_t;
typedef volatile uint32_t vuint32_t;

typedef volatile int64_t vint64_t;
typedef volatile uint64_t vuint64_t;

/*******************************************************************************
 *                          Pre-Processors Definition                          *
 *******************************************************************************/
/*
 * CPU register type width
 */
#define CPU_TYPE_8                                  (8U)
#define CPU_TYPE_16                                 (16U)
#define CPU_TYPE_32                                 (32U)

/*
 * Bit order definition
 */
#define MSB_FIRST                   (0u)        /* Big endian bit ordering    */
#define LSB_FIRST                   (1u)        /* Little endian bit ordering */

/*
 * Byte order definition
 */
#define HIGH_BYTE_FIRST             (0u)        /* Big endian byte ordering    */
#define LOW_BYTE_FIRST              (1u)        /* Little endian byte ordering */

/*
 * Platform type and endianess definitions, specific for ARM Cortex-M4F
 */
#define CPU_TYPE            CPU_TYPE_32
#define CPU_BIT_ORDER       LSB_FIRST
#define CPU_BYTE_ORDER      LOW_BYTE_FIRST

/*
 * Boolean Values
 */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif


#endif /* PLATFORM_TYPES_H */

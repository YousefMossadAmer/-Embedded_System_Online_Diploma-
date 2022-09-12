/*
 * platform_types.h
 *
 *  Created on: Sep 1, 2022
 *      Author: yousef
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include <stdbool.h>
#include <stdint.h>

#ifndef _Bool
#define _Bool unsigned char
#endif


#define CPU_TYPE           CPU_TYPE_32
#define CPU_BIT_ORDER      MSB_FIRST
#define CPU_BYTE_ORDER	   HIGH_BYTE_FIRST

#ifndef FALSE
#define FALSE     (boolean)false
#endif
#ifndef TRUE
#define TRUE      (boolean)true
#endif

typedef _Bool                 boolean;
typedef signed char		      int8;
typedef unsigned char		  uint8;
typedef char                  char_t;
typedef short			      int16;
typedef unsigned short		  uint16;
typedef int			          int32;
typedef unsigned		      uint32;
typedef long long		      int64;
typedef unsigned long long	  uint64;

typedef volatile signed char		  int8;
typedef volatile unsigned char		  uint8;

typedef volatile short			      int16;
typedef volatile unsigned short		  uint16;

typedef volatile int			      int32;
typedef volatile unsigned		      uint32;

typedef volatile long long		      int64;
typedef volatile unsigned long long	  uint64;

#endif

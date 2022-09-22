/**
 ******************************************************************************
 * @file           : Platform_Types.h
 * @author         : Mohamed Adel
 * @brief          : Common Data Types
 ******************************************************************************
 */

/***************************RCC**************************/
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

typedef unsigned char  			_Bool
typedef signed   char	   		sint8
typedef unsigned char	    	uint8
typedef signed   short int		sint16
typedef unsigned short int		uint16
typedef signed   int			sint32
typedef unsigned int			uint32
typedef signed   long long int	sint64
typedef unsigned long long int	uint64

typedef float       float32
typedef double     	float64
typedef long double float80

typedef volatile unsigned char  		_vBool
typedef volatile signed   char	   		vsint8
typedef volatile unsigned char	    	vuint8
typedef volatile signed   short int		vsint16
typedef volatile unsigned short int		vuint16
typedef volatile signed   int			vsint32
typedef volatile unsigned int			vuint32
typedef volatile signed   long long int	vsint64
typedef volatile unsigned long long int	vuint64

#ifndef FALSE
	#define FALSE (_Bool)0
#endif

#ifndef TRUE
	#define TRUE (_Bool)1
#endif

#ifndef NULL
	#define NULL (void *)0
#endif


#endif /*Platform_Types.h*/
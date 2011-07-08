/*
* Configuration of module: IoHwAb (IoHwAb.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       2.0.1
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Wed Jul 06 20:28:46 CEST 2011
*/


#ifndef _IOHWAB_H_
#define _IOHWAB_H_

#include "Std_Types.h"
#include "Modules.h"

#if defined(USE_PWM)
#include "Pwm.h"
#endif
#if defined(USE_DIO)
#include "Dio.h"
#endif

#define IOHWAB_VERSION_INFO_API ON
#define IOHWAB_SW_MAJOR_VERSION	1
#define IOHWAB_SW_MINOR_VERSION	0
#define IOHWAB_SW_PATCH_VERSION	0

#define IOHWAB_AR_MAJOR_VERSION     2
#define IOHWAB_AR_MINOR_VERSION     2 
#define IOHWAB_AR_PATCH_VERSION     1 

void IoHwAb_Init(void);

#if (IOHWAB_VERSION_INFO_API == ON)
void IoHwAb_GetVersionInfo(Std_VersionInfoType *versionInfo);
#endif

Std_ReturnType IoHwAb_Read_LEDS_LED4(boolean* Value);
Std_ReturnType IoHwAb_Read_LEDS_LED5(boolean* Value);

Std_ReturnType IoHwAb_Write_LEDS_LED4(const boolean Value);
Std_ReturnType IoHwAb_Write_LEDS_LED5(const boolean Value);



// TODO DIO Read/write channelgroup
// TODO DIO Read/write port

#endif

/*
* Configuration of module: EcuM (EcuM_Generated_Types.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.2
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Fri Jun 17 15:26:26 CEST 2011
*/


#if !(((ECUM_SW_MAJOR_VERSION == 2) && (ECUM_SW_MINOR_VERSION == 0)) )
#error EcuM: Configuration file expected BSW module version to be 2.0.*
#endif


#ifndef _ECUM_GENERATED_TYPES_H_
#define _ECUM_GENERATED_TYPES_H_

#if defined(USE_MCU)
#include "Mcu.h"
#endif
#if defined(USE_PORT)
#include "Port.h"
#endif
#if defined(USE_CAN)
#include "Can.h"
#endif
#if defined(USE_CANIF)
#include "CanIf.h"
#endif
#if defined(USE_PWM)
#include "Pwm.h"
#endif
#if defined(USE_COM)
#include "Com.h"
#endif
#if defined(USE_PDUR)
#include "PduR.h"
#endif
#if defined(USE_DMA)
#include "Dma.h"
#endif
#if defined(USE_ADC)
#include "Adc.h"
#endif
#if defined(USE_GPT)
#include "Gpt.h"
#endif
#if defined(USE_COMM)
#include "ComM.h"
#endif
#if defined(USE_NM)
#include "Nm.h"
#endif
#if defined(USE_CANNM)
#include "CanNm.h"
#endif
#if defined(USE_CANSM)
#include "CanSM.h"
#endif
#if defined(USE_LINSM)
#include "LinSM.h"
#endif
#if defined(USE_FLS)
#include "Fls.h"
#endif
#if defined(USE_EEP)
#include "Eep.h"
#endif
#if defined(USE_SPI)
#include "Spi.h"
#endif

typedef struct
{
	EcuM_StateType EcuMDefaultShutdownTarget;
	uint8 EcuMDefaultSleepMode;
	AppModeType EcuMDefaultAppMode;
	uint32 EcuMRunMinimumDuration;
	uint32 EcuMNvramReadAllTimeout;
	uint32 EcuMNvramWriteAllTimeout;

#if defined(USE_MCU)
        const Mcu_ConfigType* McuConfig;
#endif
#if defined(USE_PORT)
        const Port_ConfigType* PortConfig;
#endif
#if defined(USE_CAN)
        const Can_ConfigType* CanConfig;
#endif
#if defined(USE_CANIF)
        const CanIf_ConfigType* CanIfConfig;
#endif
#if defined(USE_CANSM)
        const CanSM_ConfigType* CanSMConfig;
#endif
#if defined(USE_NM)
        const Nm_ConfigType* NmConfig;
#endif
#if defined(USE_CANNM)
        const CanNm_ConfigType* CanNmConfig;
#endif
#if defined(USE_COMM)
        const ComM_ConfigType* ComMConfig;
#endif
#if defined(USE_COM)
        const Com_ConfigType* ComConfig;
#endif
#if defined(USE_PDUR)
        const PduR_PBConfigType* PduRConfig;
#endif
#if defined(USE_PWM)
        const Pwm_ConfigType* PwmConfig;
#endif
#if defined(USE_DMA)
        const Dma_ConfigType* DmaConfig;
#endif
#if defined(USE_ADC)
    const Adc_ConfigType* AdcConfig;
#endif
#if defined(USE_GPT)
    const Gpt_ConfigType* GptConfig;
#endif
#if defined(USE_FLS)
	const Fls_ConfigType* FlashConfig;
#endif
#if defined(USE_EEP)
	const Eep_ConfigType* EepConfig;
#endif
#if defined(USE_SPI)
	const Spi_ConfigType* SpiConfig;
#endif
} EcuM_ConfigType;

#endif /*_ECUM_GENERATED_TYPES_H_*/

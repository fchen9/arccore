/*
* Configuration of module: Rte (Rte_Blinker_Internal.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC5567
*
* Module vendor:           ArcCore
* Generator version:       0.0.13
*
* Generated by Arctic Studio (http://arccore.com) 
*/

/* Rte_Blinker.h */

#ifndef RTE_BLINKER_H
#define RTE_BLINKER_H

#include "Rte_Type.h"

#define RTE_E_DigitalOutput_E_NOT_OK 1

Std_ReturnType Rte_Call_Blinker_LED_Port_Set(const DigitalLevel value);

void BlinkerRunnable();

#endif

/*
* Configuration of module: Com (Com_PbCfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    STM32_F107
*
* Module vendor:           ArcCore
* Generator version:       2.1.1
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 2)) )
#error Com: Configuration file expected BSW module version to be 1.2.*
#endif

#ifndef COM_PBCFG_H
#define COM_PBCFG_H

#include "Com_Types.h"

extern const Com_ConfigType ComConfiguration;

//  COM Polite Defines.
#define COM_PDU_ID_CanDB_Message_1		0
#define COM_PDU_ID_CanDB_Message_2		1



// PDU group definitions
#define ComPduGroup 0
#define CanDbImportedPdus 1


// Signal definitions
#define CanDB_Signal_32_21_BE_Tester 0
#define CanDB_Signal_1_4_LE_Tester 1
#define CanDB_Signal_45_12_LE_Tester 2
#define CanDB_Signal_29_12_BE_Tester 3
#define CanDB_Signal_32_21_BE 4
#define CanDB_Signal_1_4_LE 5
#define CanDB_Signal_45_12_LE 6
#define CanDB_Signal_29_12_BE 7



// Notifications



// Callouts


#endif /* COM_PBCFG_H */

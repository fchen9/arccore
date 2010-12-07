/*
 * Configuration of module Com (Com_PbCfg.h)
 *
 * Created by: ArcCore AB
 * Configured for (MCU): MPC551x
 *
 * Module vendor: ArcCore
 * Module version: 2.0.5
 *
 * Copyright ArcCore AB 2010
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Wed Dec 01 20:18:14 CET 2010
 */


#if (COM_SW_MAJOR_VERSION != 1) 
#error "Com: Configuration file version differs from BSW version."
#endif

#ifndef COM_PBCFG_H_
#define COM_PBCFG_H_

#include "Com_Types.h"

extern const Com_ConfigType ComConfiguration;

//  COM Polite Defines.
#define COM_PDU_ID_LedCommandTx		0



// PDU group definitions
enum {
	TxGroup = 0,
};

// Signal definitions
enum {
	SetLedLevelTx = 0,
};




#endif /* COM_PBCFG_H_ */

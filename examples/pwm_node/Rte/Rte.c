/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/








/*
 * RTE.c
 *
 *  Created on: 2009-jul-10
 *      Author: rosa
 */

#include "Pwm.h"


void RTE_pwm_sine_update(Pwm_ChannelType channel, Pwm_PeriodType arg){
	Pwm_SetDutyCycle(channel, arg);
}


void RTE_pwm_enable_notifications(Pwm_ChannelType channel, Pwm_EdgeNotificationType type) {
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
	Pwm_EnableNotification(channel, type);
#endif
}

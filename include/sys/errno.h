/*
 * Copyright 2006 by Brian Dominy <brian@oddchange.com>
 *
 * This file is part of FreeWPC.
 *
 * FreeWPC is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * FreeWPC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with FreeWPC; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _SYS_ERRNO_H
#define _SYS_ERRNO_H


#define ERR_NO_FREE_TASKS 			1
#define ERR_TASK_STACK_OVERFLOW 	2
#define ERR_TASK_KILL_CURRENT 	3
#define ERR_TASK_REGISTER_SAVE 	4
#define ERR_NMI 						5
#define ERR_SWI 						6
#define ERR_SWI2 						7
#define ERR_SWI3 						8
#define ERR_IDLE_CANNOT_SLEEP 	9
#define ERR_IDLE_CANNOT_EXIT 		10
#define ERR_INVALID_LAMP_NUM		11
#define ERR_NO_FREE_TIMERS			12
#define ERR_DEFF_QUEUE_FULL		13
#define ERR_TASK_KILL_FAILED		14
#define ERR_NOT_IMPLEMENTED_YET	15
#define ERR_UNPRINTABLE_CHAR		16
#define ERR_LEFF_QUEUE_FULL		17
#define ERR_FCFS_LOCKUP				18
#define ERR_REAL_HARDWARE			19
#define ERR_NVRAM_UNLOCKED			20
#define ERR_SOL_CKSUM_ERROR      21
#define ERR_NVRAM                22
#define ERR_UNLOCK_EMPTY_DEVICE  23
#define ERR_LOCK_FULL_DEVICE     24
#define ERR_INVALID_LEFF_CONFIG  25
#define ERR_FAILED_KICK				26
#define ERR_KICK_TOO_MANY        27
#define ERR_KICK_CAUSED_INCREASE 28
#define ERR_IDLE_BALL_LOST       29
#define ERR_DEVICE_NO_CHANGE     30
#define ERR_CANT_GET_HERE        31

typedef uint8_t errcode_t;
__noreturn__ void fatal (errcode_t errcode);
void nonfatal (errcode_t errcode);

#endif /* SYS_ERRNO_H */

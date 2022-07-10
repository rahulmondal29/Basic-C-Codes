/*
 * Init_State_Machine.c
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "States.h"

void Init_State_Machine()
{
	//System Initialized and its in State_A
	current_state = GR_DWN;
	printf("\nState Machine is initialized & Program is in Gear_Down State & Light Status : %s\n"
			,State_Machine[current_state].light_status);
}

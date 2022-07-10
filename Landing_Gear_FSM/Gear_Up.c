/*
 * Gear_Up.c
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "States.h"

void Gear_Up()
{
	current_state = GR_UP;
		//printf("Current State : %s\n",State_Machine[current_state].current_state_indication);
		printf("\nEnter the Pilot's Lever Position:");
		fflush(stdout);
		scanf("%d",&pilot_lever);
		if(pilot_lever == Falling)
		{
			current_state = CHK_BFR_LND;
			printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
			printf("Light Status:%s\n",State_Machine[current_state].light_status);
			printf("Hydraulic Control for Landing Gear Status:%s\n",State_Machine[current_state].hydraulic_pump_control_status);
		}
		else
		{
			Gear_Up();
		}
}

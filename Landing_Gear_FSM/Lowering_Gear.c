/*
 * Lowering_Gear.c
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "States.h"

void Lowering_Gear()
{
	current_state = LWRNG_GR;
	//printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
	printf("\nEnter the Limit Switch Status,Pilots Leaver Status::");
	fflush(stdout);
	scanf("%d %d",&limit_switch,&pilot_lever);
	if(pilot_lever == Rising)
		{
		current_state = CHK_BFR_TKFF;
		printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
		printf("Light Status:%s\n",State_Machine[current_state].light_status);
		}
	if(limit_switch == Open)
	{
		current_state = GR_DWN;
		printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
		printf("Light Status:%s\n",State_Machine[current_state].light_status);
		printf("Hydraulic Control for Landing Gear Status:%s\n",State_Machine[current_state].hydraulic_pump_control_status);
	}

	if(limit_switch == Close)
	{
		Lowering_Gear();
	}
}

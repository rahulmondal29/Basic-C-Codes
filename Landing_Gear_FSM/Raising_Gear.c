/*
 * Raising_Gear.c
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "States.h"

void Raising_Gear()
{
	current_state = RSING_GR;
	//printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
	printf("\nEnter the Limit Switch Status,Pilots Leaver Status:");
	fflush(stdout);
	scanf("%d %d",&limit_switch,&pilot_lever);
	printf("\nWait for 1 sec\n");
	if(pilot_lever == Falling && limit_switch == Open)
	{
		current_state = CHK_BFR_LND;
		printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
		printf("Light Status:%s\n",State_Machine[current_state].light_status);
		printf("Hydraulic Control for Landing Gear Status:%s\n",State_Machine[current_state].hydraulic_pump_control_status);

	}
	else if(limit_switch == Close && pilot_lever == UP)
	{
		current_state = GR_UP;
		printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
		printf("Light Status:%s\n",State_Machine[current_state].light_status);
		printf("Hydraulic Control for Landing Gear Status:%s\n",State_Machine[current_state].hydraulic_pump_control_status);
	}

	else
	{
		Raising_Gear();
	}
}

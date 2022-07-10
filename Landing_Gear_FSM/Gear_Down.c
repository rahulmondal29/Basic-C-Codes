/*
 * Gear_Down.c
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "States.h"

void Gear_Down(void)
{
	current_state = GR_DWN;
	//printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
	printf("\nEnter the Pilot's Lever Position and Squat Switch Status:");
	fflush(stdout);
	scanf("%d %d",&pilot_lever,&squat_switch);
	if(pilot_lever == Rising && squat_switch == Open)
	{
		current_state = CHK_BFR_TKFF;
		printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
		printf("Light Status:%s\n",State_Machine[current_state].light_status);
	}
	else
	{
		Gear_Down();
	}

}


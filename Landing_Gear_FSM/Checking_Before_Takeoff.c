/*
 * Checking_Before_Takeoff.c
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "States.h"

void Checking_Before_Takeoff()
{
	current_state = CHK_BFR_TKFF;
	//printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
		printf("\nEnter the Pilot's Lever Position,Squat Switch Status and Hydraulic Mechanism Status:");
		fflush(stdout);
		scanf("%d %d %d",&pilot_lever,&squat_switch,&hydraulic_mechanism);
		printf("\nWait for 2 secs\n")
		if(pilot_lever == Falling || squat_switch == Close)
		{
			Gear_Down();
		}

		else if(pilot_lever == UP && squat_switch == Open && hydraulic_mechanism == Working)
		{
			current_state = RSING_GR;
			printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
			printf("Light Status:%s\n",State_Machine[current_state].light_status);
			printf("Direction Valve Status:%s\n\n",State_Machine[current_state].direction_valve_status);
		}

		else if(pilot_lever == UP && squat_switch == Open && hydraulic_mechanism == Malfunctioning)
		{
			current_state = RSING_GR;
			printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
			printf("Light Status:%s\n",State_Machine[current_state].light_status);
			printf("Direction Valve Status:%s\n",State_Machine[current_state].direction_valve_status);
			printf("Gas Pressurized Spring System Status:%s\n",State_Machine[current_state].gas_pressurized_spring_status[hydraulic_mechanism]);
		}
}

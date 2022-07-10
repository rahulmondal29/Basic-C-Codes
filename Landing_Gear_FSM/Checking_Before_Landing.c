/*
 * Checking_Before_Landing.c
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#include "States.h"

void Checking_Before_Landing()
{
	current_state = CHK_BFR_LND;
		//printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
		printf("\nEnter the Pilot's Lever Position and Status of Hydraulic Mechanism:");
		fflush(stdout);
		scanf("%d %d",&pilot_lever,&hydraulic_mechanism);
		if(pilot_lever == DOWN && hydraulic_mechanism == Working)
		{
			current_state = LWRNG_GR;
			printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
			printf("Light Status:%s\n",State_Machine[current_state].light_status);
			printf("Direction Valve Status:%s\n",State_Machine[current_state].direction_valve_status);
		}
		else if(pilot_lever == DOWN && hydraulic_mechanism == Malfunctioning)
		{
			current_state = LWRNG_GR;
			printf("\nCurrent State : %s\n",State_Machine[current_state].current_state_indication);
			printf("Light Status:%s\n",State_Machine[current_state].light_status);
			printf("Direction Valve Status:%s\n",State_Machine[current_state].direction_valve_status);
			printf("Gas Pressurized Spring System Status:%s\n",State_Machine[current_state].gas_pressurized_spring_status[hydraulic_mechanism]);
		}

		 if(pilot_lever == (UP || Rising || Falling))
		{
				Checking_Before_Landing();
		}

}


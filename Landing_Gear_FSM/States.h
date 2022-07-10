/*
 * States.h
 *
 *  Created on: 20-Jan-2022
 *      Author: RAHUL MONDAL
 */

#ifndef STATES_H_
#define STATES_H_

#include<stdio.h>

/* -----Functions----- */
void Init_State_Machine();
void Gear_Down();
void Checking_Before_Takeoff();
void Raising_Gear();
void Gear_Up();
void Checking_Before_Landing();
void Lowering_Gear();

typedef enum State
{

	GR_DWN,
	CHK_BFR_TKFF,
	RSING_GR,
	GR_UP,
	CHK_BFR_LND,
	LWRNG_GR

}State_Type;

typedef enum Switch
{

	Open,
	Close//Plane is in ground

}Switch_Status;

typedef enum Pilot_Lever
{

	Rising,
	Falling,
	UP,
	DOWN

}Pilot_Lever_Status;

typedef enum Hydraulic_Mechanism
{

	Working,
	Malfunctioning

}Hydraulic_Mechanism_Status;

/* -----input for changing the State----- */
static volatile Switch_Status squat_switch;
static volatile Switch_Status limit_switch;
static volatile Pilot_Lever_Status pilot_lever;
static volatile Hydraulic_Mechanism_Status hydraulic_mechanism;


State_Type current_state;

typedef struct
{
	char* current_state_indication;
	char* light_status;
	char* direction_valve_status;
	char* hydraulic_pump_control_status;
	char* gas_pressurized_spring_status[2];
}State_Table;

static State_Table State_Machine[6] = {
		{"Gear Down","Green","Down","Enabled",{NULL,NULL}},
		{"Checking Before Take Off","Green","Down","Enabled",{NULL,NULL}},
		{"Raising Gear","Red","Up","Enabled",{"Disabled","Enabled"}},
		{"Gear Up","Off","Null","Disabled",{NULL,NULL}},
		{"Checking Before Landing","Red","Down","Enabled",{NULL,NULL}},
		{"Lowering Gear","Green","Down","Enabled",{"Disabled","Enabled"}}
};

#endif /* STATES_H_ */

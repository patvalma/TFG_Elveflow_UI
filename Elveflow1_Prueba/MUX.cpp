#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "error_check.h"
#include "MUX.h"
#include <Elveflow64.h> // modify the additional include directory
using namespace std;

int main_MUX()
{
	string answer = "a"; //create a new variable to store the user answer for communication
	int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 

	////////////////////////
	//
	// Initialization
	//
	////////////////////////
	cout << "device name hardcoded in the MUX.cpp file" << endl;
	int  MyMUX_ID = -1; //AQUI PUSE EL NOMBRE DEL MUX QUE SE VE CON EL PROGRAMA DE ELVEFLOW PARA QUE LO RECONOZCA-
	// initialize the AF1 -> Use NiMAX to determine the device name
	//avoid non alphanumeric characters in device name
	error = MUX_Initialization("Dev2", &MyMUX_ID);//Chose instrument port
	Check_Error(error);// error send if not recognized


	////////////////////////
	//
	// Main loop 
	//
	////////////////////////

	int input_valve = -1;
	int output_valve = -1;
	int valve_state = -1;
	int all_valves[8] = { 0, 1, 0, 1, 0, 1, 0, 1};//init all valves here !!! should be exactelly 8 elements, otherwise nothing will happen 
	int all_valves_close[8] = { 0, 0, 0, 0, 0, 0, 0, 0};//all valve close
	int all_valves_open[8] = { 1, 1, 1, 1, 1, 1, 1, 1};//all valve open
	int trigger = -1;
	string answer_trigger = "";

	do {// loop until exit
		do {
			cout << "\nChoose what to do: set individual valve, set all valves, close all, open all, set valve(Wire), get trigger, set trigger op exit" << endl;
			getline(cin, answer);
		} while (!(answer == "set individual valve" || answer == "set all valves" || answer == "set valve(Wire)" || answer == "get trigger" || answer == "open all" || answer == "close all" || answer == "set trigger" || answer == "exit"));

		if (answer == "set individual valve")
		{
			//get the active valve (for mux quake only)
			cout << "input valve" << endl;
			cin >> input_valve;
			cout << "output valve" << endl;
			cin >> output_valve;
			cout << "valve state (0=Close, 1=open)" << endl;
			cin >> valve_state;
			getline(cin, answer);
			MUX_Set_indiv_valve(MyMUX_ID, input_valve, output_valve, valve_state);
		}

		if (answer == "set valve(Wire)")
		{

			//ask the target pressure and set the value
			cout << "valve state hard coded in the MUX.cpp file" << endl;
			MUX_Wire_Set_all_valves(MyMUX_ID, all_valves, 16);// Set the valve of the MUX WIRE ! The encoding is not the same as other MUX
		}

		if (answer == "set all valves")
		{

			//ask the target pressure and set the value
			cout << "valve state hard coded in the MUX.cpp file" << endl;
			MUX_Set_all_valves(MyMUX_ID, all_valves, 16);// 
		}

		if (answer == "close all")
		{
			cout << "all valves closed" << endl;
			MUX_Set_all_valves(MyMUX_ID, all_valves_close, 16);// 
		}
		if (answer == "open all")
		{
			cout << "all valves opened" << endl;
			MUX_Set_all_valves(MyMUX_ID, all_valves_open, 16);// 
		}
		if (answer == "set trigger")
		{
			//aset the trigger
			do
			{
				cout << "new value (high or low)" << endl;
				getline(cin, answer_trigger);
			} while (!(answer_trigger == "high" || answer_trigger == "low"));
			if (answer_trigger == "high")
			{
				MUX_Set_Trig(MyMUX_ID, 1);
			}
			else
			{
				MUX_Set_Trig(MyMUX_ID, 0);
			}
		}
		if (answer == "get trigger")
		{
			string trigger_string = "";
			MUX_Get_Trig(MyMUX_ID, &trigger);
			if (trigger == 0) trigger_string = "low";
			else trigger_string = "high";
			cout << "trigger is " << trigger_string << endl;

		}

	} while (!(answer == "exit"));//stop if exit
	MUX_Dist_Destructor(MyMUX_ID);
	system("PAUSE");
	return 0;
}


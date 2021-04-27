#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "error_check.h"
#include "MUX_Dist.h"
#include <Elveflow64.h> // modify the additional include directory
using namespace std;

int main_MUX_Dist()
{
	string answer = "a"; //create a new variable to store the user answer for communication
	int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 

	////////////////////////
	//
	// Initialization
	//
	////////////////////////
	cout << "COM port hardcoded in the MUX_Dist.cpp file/n! ! ! FTDI driver required ! ! !" << endl;
	int  MyMUX_Dist_ID = -1;
	// initialize the AF1 -> Use NiMAX to determine the device name
	//avoid non alphanumeric characters in device name
	error = MUX_Dist_Initialization("ASRL4::INSTR", &MyMUX_Dist_ID);//Chose the com port, can be ASRLXXX::INSTR (where XXX=port number)
	Check_Error(error);// error send if not recognized


	////////////////////////
	//
	// Main loop 
	//
	////////////////////////

	int valve = -1;
	string answer_trigger = "";
	do {// loop until exit
		do {
			cout << "\nChoose what to do: get valve, set valve or exit" << endl;
			getline(cin, answer);
		} while (!(answer == "get valve" || answer == "set valve" || answer == "exit"));

		if (answer == "get valve")
		{
			//get the active valve
			MUX_Dist_Get_Valve(MyMUX_Dist_ID, &valve);
			cout << "active valve: " << valve << endl;
		}

		if (answer == "set valve")
		{
			//ask the target pressure and set the value
			cout << "select valve" << endl;
			cin >> valve;
			getline(cin, answer);//remove CR
			MUX_Dist_Set_Valve(MyMUX_Dist_ID, valve);
		}

	} while (!(answer == "exit"));//stop if exit
	MUX_Dist_Destructor(MyMUX_Dist_ID);
	system("PAUSE");
	return 0;
}


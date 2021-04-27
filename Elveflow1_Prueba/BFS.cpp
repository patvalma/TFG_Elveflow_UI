#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "error_check.h"
#include "MUX_Dist.h"
#include <Elveflow64.h>// modify the additional include directory
using namespace std;

int main_BFS()
{
	string answer = "a"; //create a new variable to store the user answer for communication
	int error = 0;// use to obtain errors of function. If it's 0 -> no error , else -> error, see labview error 

				  ////////////////////////
				  //
				  // Initialization
				  //
				  ////////////////////////
	cout << "COM port hardcoded in the BFS.cpp file/n! ! ! FTDI driver required ! ! !" << endl;
	int  MyBFS_ID = -1;
	//avoid non alphanumeric characters in device name
	error = BFS_Initialization("ASRL13::INSTR", &MyBFS_ID);//Choose the com port, can be ASRLXXX::INSTR (where XXX=port number)
	Check_Error(error);// error send if not recognized


					   ////////////////////////
					   //
					   // Main loop 
					   //
					   ////////////////////////

	double value = 0;
	string answer_trigger = "";
	do {// loop until exit
		do {
			cout << "\nChoose what to do: get density, get flow, get temperature, set filter or exit" << endl;
			getline(cin, answer);
		} while (!(answer == "get density" || answer == "get flow" || answer == "get temperature" || answer == "set filter" || answer == "exit"));

		if (answer == "get density")
		{
			//get the actual density (!!!! NEED TO BE DONE AT LEAST ONCE BEFORE READING FLOW!!!!)
			BFS_Get_Density(MyBFS_ID, &value);
			cout << "Density: " << value << endl;
		}
		if (answer == "get flow")
		{
			//get the actual flow (!!!! NEED TO measure density at least one time before this function, density is used to measure the flux!!!!)
			BFS_Get_Flow(MyBFS_ID, &value);
			cout << "flow: " << value << endl;
			cout << "Remember that density need to be measured at least once before since density is used to measure the flow. If measurement frequency is not critical, always measure first density and then flow" << endl;
		}
		if (answer == "get temperature")
		{
			//get the actual flow (!!!! NEED TO measure density at least one time before this function, density is used to measure the flux!!!!)
			BFS_Get_Temperature(MyBFS_ID, &value);
			cout << "Temperature: " << value << endl;

		}
		if (answer == "set filter")
		{
			double filter_value = 0;
			//ask the target pressure and set the value
			cout << "set the filter (0.00001 = maximum filter, 1 = minimum filter)" << endl;
			cin >> filter_value;
			getline(cin, answer);//remove CR
			BFS_Set_Filter(MyBFS_ID, filter_value);
		}

	} while (!(answer == "exit"));//stop if exit
	MUX_Dist_Destructor(MyBFS_ID);
	system("PAUSE");
	return 0;
}


/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */
/*  CIS 1202 501                                                                                                                 */
/*                                                                                                                               */
/*  November 28, 2021                                                                                                            */
/*                                                                                                                               */
/*  Program Name - Assignment 14 - Create and Test Base and Derived  Classes                                                     */
/*                                                                                                                               */
/* This program will allow users to:                                                                                             */
/*   1) Enter and display information which goes to the base class Vehicle ( manufacturer and year built)                        */
/*   2) Enter and display information which goes to the derived class Car (manufacturer, year built and number of doors)         */
/*   3) Enter and display information which goes to the derived class Truck (manufacturer, year built and towing capacity)       */
/*                                                                                                                               */
/********************************************************************************************************************************/


#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"


using namespace std;


int main()
{
	string manf;
	string input;
	int yr;
	Vehicle veh;
	
	cout << "Vehicle Program";
	cout << "\n";
	 
	cout << "Vehicle:";
	cout << "\n";

	cout << "\nEnter the manufacturer: ";
	getline(cin, manf);
	veh.setManufacturer(manf);

	cout << "\nEnter the year built: ";
	getline(cin, input);
	yr = stoi(input);
	veh.setYearBuilt(yr);

	veh.displayInfo();




	system("pause");
	return 0;
}

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

/********************************************************************************************************************************/
/*  This section allows user to enter information to the vehicle base class and displays the information                        */    
/********************************************************************************************************************************/
	string manf;
	string input;
	int yr;
	int doors;
	Vehicle veh;
	Car car;
	
	cout << "Vehicle Program";
	cout << "\n";
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
	cout << "\n";
	cout << "\n";


 /*******************************************************************************************************************************/
/*  This section allows user to enter information to the car derived  class and displays the information                        */
/********************************************************************************************************************************/

	cout << "\n";
	cout << "\n";
	cout << "Car:";
	cout << "\n";

	cout << "\nEnter the manufacturer: ";
	getline(cin, manf);
	car.setManufacturer(manf);

	cout << "\nEnter the year built: ";
	getline(cin, input);
	yr = stoi(input);
	car.setYearBuilt(yr);

	cout << "\nEnter the number of doors: ";
	getline(cin, input);
	doors = stoi(input);
	car.setNumberOfDoors(doors);

	car.displayInfo();




	cout << "\n";
	cout << "\n";

	system("pause");
	return 0;
}

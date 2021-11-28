/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */
/*  CIS 1202 501                                                                                                                 */
/*                                                                                                                               */
/*  November 28, 2021                                                                                                           */
/*                                                                                                                               */
/*  Class Implementation  file - Assignment 14 -   ( class declaration in header file)                                           */
/*                                                                                                                               */
/*  This defines the member definitions in a  file for the class Vehicle                                                         */
/*                                                                                                                               */
/********************************************************************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "Vehicle.h"

using namespace std;

string Vehicle::getManufacturer() const
{
	return Vehicle::manufacturer;
}

int Vehicle::getYearBuilt() const
{
	return Vehicle::yearBuilt;
}

void Vehicle::setManufacturer(string manuf)
{
	Vehicle::manufacturer = manuf;
}

void Vehicle::setYearBuilt(int year)
{
	Vehicle::yearBuilt = year;
}

void displayInfo()

{
	cout << "\nVehicle Information:";

	cout << "\nManufacturer: " << Vehicle::manufacturer;

	cout << "\nYear Built: " << Vehicle::yearBuilt;

}
/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */
/*  CIS 1202 501                                                                                                                 */
/*                                                                                                                               */
/*  November 28, 2021                                                                                                            */
/*                                                                                                                               */
/*   Vehicle Class Implementation  file - Assignment 14 -   ( class declaration in Vehicle file)                                 */
/*                                                                                                                               */
/*  This defines the method definitions in a  file for the class Vehicle                                                         */
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

 void Vehicle::displayInfo()

{
	cout << "\nVehicle Information:";

	cout << "\nManufacturer: " << Vehicle::manufacturer;


	cout << "\nYear Built: " << Vehicle::yearBuilt;


}
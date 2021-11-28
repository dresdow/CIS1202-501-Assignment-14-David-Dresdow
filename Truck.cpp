/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */
/*  CIS 1202 501                                                                                                                 */
/*  November 28, 2021                                                                                                            */
/*                                                                                                                               */
/*  Truck Class Implementation  file - Assignment 14 -   ( class declaration in Truck header file)                               */
/*                                                                                                                               */
/*  This defines the member definitions in a  file for the class Truck (a derived class from base class Vehicle)                 */
/*                                                                                                                               */
/********************************************************************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

int Truck::getTowingCapacity() const
{
	return Truck::towingCapacity;
}

void Truck::setTowingCapacity(int towingCap)
{
	Truck::towingCapacity = towingCap;
}

void Truck::displayInfo()

{
	Vehicle::displayInfo();

	cout << "\nTowing capacity: " << Truck::towingCapacity;

}

















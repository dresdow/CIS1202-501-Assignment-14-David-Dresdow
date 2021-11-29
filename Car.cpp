/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */  
/*  CIS 1202 501                                                                                                                 */                                                                                                                       
/*  November 28, 2021                                                                                                            */
/*                                                                                                                               */
/*  Car Class Implementation  file - Assignment 14 -   ( class declaration in Car header file)                                   */
/*                                                                                                                               */
/*  This defines the method definitions in a  file for the class Car (a derived class from base class Vehicle)                   */
/*                                                                                                                               */
/********************************************************************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

int Car::getNumberOfDoors() const
{
	return Car::numberOfDoors;
}

void Car::setNumberOfDoors(int doors)
{
	Car::numberOfDoors = doors;
}

void Car::displayInfo()

{
	Vehicle::displayInfo();
	
	cout << "\nDoors: " << Car::numberOfDoors;

}
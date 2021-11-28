/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */
/*  CIS 1202 501                                                                                                                 */
/*                                                                                                                               */
/*  November 28, 2021                                                                                                            */
/*                                                                                                                               */
/*  Vehicle Base Class Header file - Assignment 14 - Working with base and derived classes                                       */
/*                                                                                                                               */
/*  This defines the header file for the base Vehicle                                                                           */
/*                                                                                                                               */
/********************************************************************************************************************************/

#ifndef VEHICLE_H
#define VEHICLE_H
#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Vehicle
{protected:
	string manufacturer;
	int yearBuilt;


public:
	//Default Constructor
	Vehicle()
	{
		manufacturer = "";
		yearBuilt = 0;
	}

	string getManufacturer() const;

	int getYearBuilt() const;

	void setManufacturer(string);

	void setYearBuilt(int);

	void displayInfo();
};

#endif // VEHICLE_H
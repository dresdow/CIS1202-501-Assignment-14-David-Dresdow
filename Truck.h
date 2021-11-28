/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */
/*  CIS 1202 501                                                                                                                 */
/*                                                                                                                               */
/*  November 28, 2021                                                                                                            */
/*                                                                                                                               */
/*  Truck Derived Class Header file - Assignment 14 - Working with base and derived classes                                      */
/*                                                                                                                               */
/*  This defines the header file for the derived Truck class with a base class of Vehicle                                        */
/*                                                                                                                               */
/********************************************************************************************************************************/

#ifndef TRUCK_H
#define TRUCK_H
#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "Vehicle.h"

using namespace std;

#include "Vehicle.h"
class Truck :
    public Vehicle
{
private:
    int towingCapacity;

public:
    Truck() :Vehicle()                // constructor
    {
        towingCapacity = 0;
    }

    int getTowingCapacity() const;

    void setTowingCapacity(int);

    void displayInfo();
};

#endif // TRUCK_H
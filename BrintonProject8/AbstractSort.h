#pragma once

/******************************************************************************
*       Class: AbstractSort
*  Base Class: ** None **
*
* This file defines the members of the class: AbstractSort
* These members include class variable data members, class constant, static
* data members, and class method declarations only and/or class method
* declarations and definitions.
*
* Programmer: Colin Brinton
*
* Revision     Date                        Release Comment
* --------  ----------  -------------------------------------------------------
*   1.0     06/02/2015  Initial Release
*
* Class Description
* -----------------
* The base class from which SelectionSort and QuickSort are derived. Contains a
* pure virtual function to be defined in the inherited classes. Contains public
* member functions compare() and getCompare(). To increment the protected data
* member "comparisons," and to return the number of comparisons, respectively.
*
*
* ----------------------------- Public Interface ------------------------------
*      Method                               Description
* ----------------  -----------------------------------------------------------
* void compare()	Increments "comparisons" by one each time it is called
* int getCompare()	RETurns "comparisons"
*
*
* ------------------------------ Private Methods ------------------------------
*       Name                               Description
* ----------------  -----------------------------------------------------------
*                           *** No private methods ***
*
*
* --------------------------- Private Data Members ----------------------------
*               Data
*    Type       Type       Name                    Description
* ---------- --------- ------------ -------------------------------------------
*						*** No private data members ***
*
*
* ------------------  Public "static const" Data Members ----------------------
*   Data
*   Type         Name                         Description
* --------  --------------  ---------------------------------------------------
*                       *** No public data members ***
*
*******************************************************************************
*/
// External Definition Files
#include "stdafx.h"
//#include "SelectionSort.h"
//#include "QuickSort.h"
using namespace std;

class AbstractSort
{
protected:
	// 1. Non-static (instance) Variable Declarations

	int comparisons = 0;

public:
	// 1. Default Constructor
	AbstractSort();

	// 2. Class Destructor
	~AbstractSort();

	// 3. Mutator Methods

	virtual void sort(int arr[], int size) = 0; // Pure virtual method

	// Inline method used to increment comparisons each time it is called
	void AbstractSort::compare()
	{
		comparisons += 1;
	}

	// Inline method that RETurns comparisons when called
	int AbstractSort::getCompare()
	{
		return comparisons;
	}

};


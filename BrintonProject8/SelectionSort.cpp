/******************************************************************************
*       Class: SelectionSort
*  Base Class: AbstractSort
*
*
* This file defines the static, const data members, if any, and the class
* methods not defined in the class definition file, SelectionSort.h
*
* Programmer: Colin Brinton
*
* Revision     Date                        Release Comment
* --------  ----------  ------------------------------------------------------
*   1.0     06/02/2015  Initial Release
*
*
* ----------------------------- Public Interface -----------------------------
*      Method								     Description
* ----------------			----------------------------------------------------------
* Class()						 Default Constructor
* ~Class()						 Class Destructor
* sort(int arr[], int size)		 Sorts the array it is passed using a selection sort. Keeps 
*									track of the number of comparisons it has made during the
*									sort by incrementing it's base class data member 
*									"comparisons".
*
*
* ------------------------------ Private Methods -----------------------------
*       Name                               Description
* ----------------  ----------------------------------------------------------
*                           *** No private methods ***
*
*
*
* ------------------------- Data Member Initializations ----------------------
*               Data
*    Type       Type         Name                   Description
* ----------  --------  --------------  --------------------------------------
*  const 		int			OFFSET		The offset needed to adjust to array index

******************************************************************************
*/
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
//#include "AbstractSort.h"   // Class Definition file
#include "SelectionSort.h"

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
// are utilized in this program


// Class Constant Value Initializations

const int OFFSET = 1;

// Class Default Constructor
SelectionSort::SelectionSort()
{
}


void SelectionSort::sort(int arr[], int size)
{

	// The code for a standard selection sort
	int i, j, minIndex, tmp;
	for (i = NULL; i < size - OFFSET; i++) 
	{
		minIndex = i;
		for (j = i + OFFSET; j < size; j++)
		{
			// Base class compare method is called directly
			// before the comparson is made.
			compare();
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}

		if (minIndex != i) 
		{
			tmp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = tmp;
		}
	}
}

// Class Destructor
SelectionSort::~SelectionSort()
{
}


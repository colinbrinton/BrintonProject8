
#include "SelectionSort.h"

/******************************************************************************
*       Class: **Class Name**       (Ex: Car)
*  Base Class: ** None **  Supply Base Class name if inheritance applies
*
*
* This file defines the static, const data members, if any, and the class
* methods not defined in the class definition file, ***ClassName***.h
*
* Programmer: **Your Name**
*
* Revision     Date                        Release Comment
* --------  ----------  ------------------------------------------------------
*   1.0     MM/DD/YYYY  Initial Release
*   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
*
*
* ----------------------------- Public Interface -----------------------------
*      Method                               Description
* ----------------  ----------------------------------------------------------
* Class()           Default Constructor
* ~Class()          Class Destructor
*  ***Enter the remaining Class methods here***
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
*
******************************************************************************
*/
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include "Class.h"   // Class Definition file
#include "SelectionSort.h"

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
// are utilized in this program


// Class Constant Value Initializations


// Class Default Constructor
SelectionSort::SelectionSort()
{
}



void sort(int arr[], int size)
{
	int i, j, minIndex, tmp;
	for (i = 0; i < n - 1; i++) {
		minIndex = i;
		for (j = i + 1; j < n; j++)
		if (arr[j] < arr[minIndex])
			minIndex = j;
		if (minIndex != i) {
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


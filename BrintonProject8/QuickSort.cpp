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
#include "QuickSort.h"   // Class Definition file

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
// are utilized in this program


// Class Constant Value Initializations


// Class Default Constructor
QuickSort::QuickSort()
{
}

void sort(int arr[], int size)
{

}

void sort(int arr[], int size) 
{
	int left = 0;
	int right = size - 1;
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		sort(arr, size + 1);
	if (i < right)
		sort(arr, size + 1);
}

// Class Destructor
QuickSort::~QuickSort()
{
}

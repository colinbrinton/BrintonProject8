/******************************************************************************
*       Class: QuickSort
*  Base Class: AbstractSort
*
*
* This file defines the static, const data members, if any, and the class
* methods not defined in the class definition file, QuickSort.h
*
* Programmer: Colin Brinton
*
* Revision     Date                        Release Comment
* --------  ----------  ------------------------------------------------------
*   1.0     06/02/2015  Initial Release
*
*
* ----------------------------- Public Interface -----------------------------
*      Method                               Description
* ----------------				----------------------------------------------------------
* Class()							 Default Constructor
* ~Class()							 Class Destructor
* void sort(int arr[], int size)	 Sorts the array it is passed using quicksort. Keeps
*										track of the number of comparisons it has made during the
*										sort by incrementing it's base class data member
*										"comparisons".
*
*
* ------------------------------ Private Methods -----------------------------
*       Name                               Description
* ----------------  ----------------------------------------------------------
*                           *** No private methods ***
*
*
*
** ------------------------- Data Member Initializations ----------------------
*               Data
*    Type       Type         Name                   Description
* ----------  --------  --------------  --------------------------------------
*  const 		int			OFFSET		The offset needed to adjust to array index
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

const int OFFSET = 1;

// Class Default Constructor
QuickSort::QuickSort()
{
}

void QuickSort::sort(int arr[], int size)
{
	// The code for a standard quicksort
	int left = NULL;
	int right = size - OFFSET;
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	// Pivot partition
	while (i <= j)
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;

		// Base class compare method is called directly
		// before the comparison is made.
		compare();
		if (i <= j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	// Recursion
	if (left < j)
		sort(arr, left);
	if (i < right)
		sort(arr, right);
}

// Class Destructor
QuickSort::~QuickSort()
{
}


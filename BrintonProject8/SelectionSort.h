	/******************************************************************************
	*       Class: SelectionSort
	*  Base Class: AbstractSort
	*
	* This file defines the members of the class: SelectionSort
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
	* This class has a verson of the sort() method that uses a selection sort. It keeps
	* track of the number of comparisons made in the sort using a base class method
	* compare().
	*
	*
	* ----------------------------- Public Interface ------------------------------
	*      Method														 Description
	* ----------------								-----------------------------------------------------------
	* SelectionSort()								Default constructor
	* virtual void sort(int arr[], int size)		Sorts the array it is passed using a selection sort. Keeps 
	*													track of the number of comparisons it has made during the
	*													sort by incrementing it's base class data member 
	*													"comparisons".
	* ~SelectionSort();								Class detructor
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
	*						  *** No private data members ***
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
#include "AbstractSort.h"

class SelectionSort : public AbstractSort
{
	public:

		//1. Default Constructor
		SelectionSort();

		// 2. Class Destructor
		~SelectionSort();

		// 3. Mutator Methods
		virtual void sort(int arr[], int size);
	};




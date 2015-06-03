#pragma once

/******************************************************************************
*       Class: **Class Name**       (Ex: Car)
*  Base Class: ** None **  Supply Base Class name if inheritance applies
*
* This file defines the members of the class: ***Class Name***
* These members include class variable data members, class constant, static
* data members, and class method declarations only and/or class method
* declarations and definitions.
*
* Programmer: **Your Name**
*
* Revision     Date                        Release Comment
* --------  ----------  -------------------------------------------------------
*   1.0     MM/DD/YYYY  Initial Release
*   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
*
* Class Description
* -----------------
* ** Describe the class defined here, including it's purpose  **
* ** This may take several lines to describe                  **
*
*
* ----------------------------- Public Interface ------------------------------
*      Method                               Description
* ----------------  -----------------------------------------------------------
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
* ***Type: static, non-static***
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

class QuickSort : public AbstractSort
{
public:
	// 1. Default Constructor
	QuickSort();

	// 2. Class Destructor
	~QuickSort();

	// 3. Mutator Methods
	virtual void sort(int arr[], int size);
};


/******************************************************************************
 * Bellevue Class: PROG 113
 *           Term: Spring 2015
 *     Instructor: Robert Main
 *
 * Solution/Project Name: BrintonProject8
 *             File Name: SortClient.cpp 
 *
 * This file defines the entry point method, main(), for a C++ Console
 * application. When the executable file is selected for execution, the OS
 * will transfer execution to the first line of code in method main(). Other
 * methods called from main() may be defined here as well.
 *
 * Programmer: Colin Brinton
 *
 * Assigned Project Number: 8
 *
 *
 * Revision     Date                        Release Comment
 * --------  ----------  ------------------------------------------------------
 *   1.0     06/02/2015  Initial Release
 *
 *
 * UDTs (Classes) Used
 *       Name                          Description
 * ----------------  ----------------------------------------------------------
 *  SelectionSort		Derived from AbstractSort, sorts an array using a selection
 *							sort and keeps track of comparisons made.
 *	QuickSort			Derived from AbstractSort, sorts an array using quicksort and 
 *							keeps track of comparisons made.
 *
 * Program Inputs
 * --------------
 *  Device                              Description
 * --------  ------------------------------------------------------------------
 * Keyboard  User hits enter when they wish  to exit the program.
 *
 *
 * Program Outputs
 * ---------------
 *  Device                            Description
 * --------  ------------------------------------------------------------------
 * Monitor   Description of client program, displays array as it is generated, 
 *				displays the copy array as it is generated. Displays the sorted
 *				array using selection sort. Displays the number of comparisons.
 *				Displays the sorted copy array and number of comparisons using
 *				quicksort. Promt to exit the program.
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method
 *
 ******************************************************************************
 */
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <iostream>  // Defines objects and classes used for stream I/O
#include <time.h>
// Class Definition header file(s)
#include "AbstractSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program

/******************************************************************************
* Method: main()
*
* Method Description
* ------------------
* This program is the test client program used to demonstrate the functionality of
* the two classes inherited from AbstractSort, SelectionSort and QuickSort. The
* program opens with a description of its functionality. It then generates and displays
* a test array and a copy of the test array. The program then creates a SelectionSort
* object and calls the SelectionSort "sort" method, passing the generated array. 
* The sorted array and the number of comparisons are displayed (using getComparisons). 
* The previous two steps are repeated for the copy array using QuickSort. The user is then
* prompted to exit.
*
*
* Pre-Conditions
* --------------
* None
*
*
* Method Arguments
* ----------------
*   Type        Name                        Description
* --------  -------------  ------------------------------------------------
*                        *** No Arguments supplied ***
*
*
* Return Value
* ------------
*   Type                              Description
* --------  ---------------------------------------------------------------
* int       Program Execution status: 0 - No errors
*
*
* Invoked Methods
* ---------------
*     Name														   Description
* ------------							 --------------------------------------------------------------
* SelectionSort::sort(int[], int)		Sorts the array it is passed using a selection sort, keeps track
*											of the number of comparisons it makes. (Always 190 for an array
*											of 20 elements)
* QuickSort::sort(int[], int)			Sorts the array it is passed using quicksort, keeps track
*											of the number of comparisons it makes.
* getComparisons();						Returns the number of comparisons made by the sort.
*
*******************************************************************************
*/
int main()
{


	// Constant "const" Value Declarations
	const int NO_ERRORS = 0;
	const int SIZE = 20;

	int testArr[SIZE];
	int testArr2[SIZE];

	srand(time(NULL));

	cout << "This is the test client program to test two concrete methods" << endl
		 << "inherited from a pure virtual method." << endl << endl;

	cout << "This program will create an array containing 20 elements." << endl
		 << "Each element will be filled with a random number between" << endl
		 << "1 - 100." << endl << endl << endl;

	cout << "Generating test array..." << endl << endl;

	for (int i = 0; i < 20; i++)
	{
		testArr[i] = rand() % 100 + 1;

		cout << testArr[i] << " ";
	}

	cout << endl << endl;
	cout << "Making a copy of the test array..." << endl << endl;

	for (int i = 0; i < 20; i++)
	{
		testArr2[i] = testArr[i];

		cout << testArr2[i] << " ";
	}

	cout << endl << endl << endl;
	cout << "TEST ONE:" << endl;
	cout << "Using selection sort to sort the array..." << endl << endl;

	SelectionSort test;

	test.sort(testArr, SIZE);

	for (int i = 0; i < 20; i++)
	{

		cout << testArr[i] << " ";
	}

	cout << endl << endl << "Number of comparisons: " << test.getCompare() << endl << endl;

	cout << endl;

	cout << "TEST TWO:" << endl;
	cout << "Using Quicksort to sort the copy array..." << endl << endl;

	QuickSort test2;

	test2.sort(testArr2, SIZE);

	for (int i = 0; i < 20; i++)
	{

		cout << testArr[i] << " ";
	}

	cout << endl << endl << "Number of comparisons: " << test2.getCompare() << endl;

	// This prevents the Visual Studio Console Window from closing during
	// debug mode and allows you to select and copy the results displayed in
	// the Console window.
	cout << endl;  // Inserts a blank line before the prompt occurs
	system("pause");

	return NO_ERRORS;
}


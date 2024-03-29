//********************************************************************* 
// File name:	 RectangleDriver.cpp
// Author:		 CS, Pacific University
// Date:			 2/6/2023
// Class:			 CS 250
// Assignment: Rectangle Lab
// Purpose:		 Driver used to test class Rectangle
// 
//						 TODO #1: a) Uncomment getWidth and compile.
//											b) What is the error and what does it mean?
//											c) Fix the error
//						 TODO #2:	a) Uncomment setWidth & write the correct code
//											b) Did your solution work the first time?
//						 TODO #3:	a) Uncomment the first constructor in the .h
//												 the .h file, write the implementation in
//												 the .cpp file, and test
//						 TODO #4:	a) Do the same for the second constructor
//						 TODO #5:	a) Fill the array of rectangles cRectangles
//												 with rectangles of 1x2, 2x3, 3x4, and so on
//												 for as many rectangles specified in the 
//												 constant NUM_RECTANGLES.
//											b) Write each rectangle to the display using
//												 the function write
//						 TODO #6: a) Read a single rectangle from the file into
//												 the variable cRectangle
//											b) Write the rectangle cRectangle to the 
//												 display using write
//						 TODO #7: a) Copy the rectangle cRectangle into the
//												 variable cRectangleCopy
//										  b) Write the rectangle cRectangleCopy to the 
//												 display using write.
//*********************************************************************

#include <iostream>
#include <fstream>
#include "Rectangle.h"

using namespace std;
/**********************************************************************
Function:		  main

Description:	main driver for the rectangle example.
							show how each member function in rectangle can be used.

Parameters:		none

Returned:			exit status
**********************************************************************/

int main () {
	const string FILE_OF_RECTANGLES = "rectangles.txt";
	const unsigned int NUM_RECTANGLES = 5;
	ifstream inStream;
	Rectangle cRectangles[NUM_RECTANGLES];
	Rectangle cRectangle;
	Rectangle cRectangleCopy; 

	inStream.open (FILE_OF_RECTANGLES);
	if (inStream.fail ()) {
		cout << "Error opening: " << FILE_OF_RECTANGLES;
		exit (EXIT_FAILURE);
	}

	inStream.close ();

	return EXIT_SUCCESS;
}

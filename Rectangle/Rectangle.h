//********************************************************************* 
// File name:	 Rectangle.h
// Author:		 CS, Pacific University
// Date:			 
// Class:			 CS 250
// Assignment: Rectangle Lab
// Purpose:		 Declaration for a Rectangle class
//*********************************************************************

#pragma once

#include <fstream>

using namespace std;

class Rectangle {
public:
	//Rectangle (double length = 0.0, double width = 0.0);
	//Rectangle (const Rectangle &rcRectangle);

	void setLength (double length);
	void setWidth (double width);

	double getLength () const;
	double getWidth () const;

	double getArea () const;
	double getPerimeter () const;

	void write (ostream& outStream) const;
	void read (istream& inStream);

private:
	double mLength;
	double mWidth;
};
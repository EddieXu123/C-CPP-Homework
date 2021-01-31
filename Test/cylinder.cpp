
// Cylinder class inherits from class Circle.
#include <iostream>
using std::cout;

#include "cylinder.h"   // Cylinder class definition

// default constructor
Cylinder::Cylinder(int xValue, int yValue, double radiusValue,double heightValue): Circle(xValue, yValue, radiusValue)
{
	setHeight(heightValue);
} // end Cylinder constructor

// set Cylinder's height
void Cylinder::setHeight(double heightValue)
{
	height = (heightValue < 0.0 ? 0.0 : heightValue);
} // end function setHeight

  // get Cylinder's height
double Cylinder::getHeight() const
{
	return height;
} // end function getHeight

  // redefine Circle4 function getArea to calculate Cylinder area
double Cylinder::getArea() const
{
	return 2 * Circle::getArea() + getCircumference() * getHeight();
} // end function getArea

// calculate Cylinder volume
double Cylinder::getVolume() const
{
	return Circle::getArea() * getHeight();
} // end function getVolume

  // output Cylinder object
void Cylinder::print() const
{
	Circle::print();
	cout << "; Height = " << getHeight();
} // end function print

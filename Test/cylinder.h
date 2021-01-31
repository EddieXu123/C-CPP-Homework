#ifndef CYLINDER_H_INCLUDED
#define CYLINDER_H_INCLUDED

// Cylinder class inherits from class Circle4.
#include "circle.h"  // Circle class definition

class Cylinder : public Circle {

public:
	// default constructor
	Cylinder(int = 0, int = 0, double = 0.0, double = 0.0);

	void setHeight(double);  // set Cylinder's height
	double getHeight() const;  // return Cylinder's height

	double getArea() const;    // return Cylinder's area
	double getVolume() const;  // return Cylinder's volume
	void print() const;        // output Cylinder

private:
	double height;  // Cylinder's height

}; // end class Cylinder



#endif // CYLINDER_H_INCLUDED

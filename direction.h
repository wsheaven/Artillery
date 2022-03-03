#pragma once

#include <iostream>

class Direction {
public:
	// Constructor 
	Direction(); 

	void assign(Direction & direction); 

	void setRadians(double radians); 

	void setDegrees(double radians); 

	void setDxDy(double dx, double dy); 

	void setDown(); 

	void setUp();

	void setLeft();

	void setRight();

	void reverse(); 

	double getRadians(); 

	double getDegrees(); 

	double getDx(); 

	double getDy(); 

private:

	double radians;



};
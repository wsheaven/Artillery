#pragma once
#include "direction.h"

class Velocity
{
public: 

	Velocity(); 

	double getDx(); 

	double getDy();

	double getSpeed();

	Direction getDirection();

	void setDX(double dx);

	void setDY(double dy);

	void setDxDy(double dx, double dy);

	void setDirection(Direction); 

	void setSpeed(double speed); 

	void addDX(double dx); 

	void addDY(double dy); 

	Velocity addV(Velocity); 

	void reverse();


private:
	double dx; 
	double dy; 

};


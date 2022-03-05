#pragma once
#include "direction.h"
#include "velocityTest.h"

class Velocity
{
public: 

	friend class VelocityTest;

	Velocity(); 

	double getDx(); 

	double getDy();

	double getSpeed();

	double getDirection();

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


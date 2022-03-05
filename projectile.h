#pragma once

#include "position.h"
#include "velocity.h"
#include "uiDraw.h"

using namespace std; 

class Projectile
{

private: 
	double mass; 
	double radius; 
	unique_ptr<double[]> flightPath; 

public: 

	Projectile(); 

	void reset(); 

	void fire(Position pos, double time, double angle, Velocity vel); 

	void advance(double time);

	void draw(ogstream gout); 

	bool flying(); 

	double getAltitude(); 

	Position getPosition(); 

	double getFlightTime();

	double getFlightDistance(); 

	double getSpeed(); 

	double getCurrentTime(); 

	void setMass(double mass); 

	void setRadius(double radius); 

};


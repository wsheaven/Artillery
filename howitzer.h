#pragma once

#include "direction.h"
#include "position.h"
#include "uiDraw.h"

class Howitzer
{

private: 
	Position position; 
	double muzzleVelocity; 
	Direction elevation; 

public:
	Howitzer(); 

	void draw(ogstream gout, double flightTime); 

	Position getPosition(); 

	void generatePosition(double size); 

	void rotate(double radians); 

	void raise(double radians); 




};


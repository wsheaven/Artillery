#pragma once

#include "position.h"
#include "velocity.h"
#include "uiDraw.h"
#include "projectileTest.cpp"

using namespace std; 

class Projectile
{

private: 
   const double mass = 46.7;
   const double diameter = 154.89;
   const double initialVelocity = 827.0;

	unique_ptr<double[]> flightPath; 

   double distance = 0.0;//currently for test cases
   double hangTime = 0.0;//currently for test cases

public: 

	
   friend ProjectileTest;

   virtual double getDistance(double angle)
   {
      distance = 0.0;
   }

   virtual double getHangTime(double angle)
   {
      hangTime = 0.0;
   }

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


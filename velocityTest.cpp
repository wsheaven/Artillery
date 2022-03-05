#include "velocityTest.h"
 

void VelocityTest::run()
{
}

void VelocityTest::getUp()
{
	Velocity vel; 

	vel.dx = 100; 
	vel.dy = 100; 

	vel.setDX(0.0); 
	vel.setDY(1.0); 

	assert(vel.getDirection() == 0); 

}

void VelocityTest::getDirectionRight()
{
	Velocity vel;

	vel.dx = 100;
	vel.dy = 100;

	vel.setDX(1.0);
	vel.setDY(0.0);

	assert(vel.getDirection() == 3.145/2);
}

void VelocityTest::getDirectionUpRight()
{
	Velocity vel;

	vel.dx = 100;
	vel.dy = 100;

	vel.setDX(1.0);
	vel.setDY(1.0);

	assert(vel.getDirection() == 3.145 / 4);
}

void VelocityTest::getDirectionLeft()
{
	Velocity vel;

	vel.dx = 100;
	vel.dy = 100;

	vel.setDX(-1.0);
	vel.setDY(0.0);

	assert(vel.getDirection() == -3.145 / 2);
}

void VelocityTest::getDirectionDown()
{
	Velocity vel;

	vel.dx = 100;
	vel.dy = 100;

	vel.setDX(0.0);
	vel.setDY(-1.0);

	assert(vel.getDirection() == 3.145);
}

void VelocityTest::reverseUpRight()
{
	Velocity vel;

	vel.dx = 100;
	vel.dy = 100;

	vel.setDX(1.0);
	vel.setDY(1.0);

	vel.reverse(); 

	assert(vel.dx == -1.0);
	assert(vel.dy == -1.0);
}

void VelocityTest::reverseRight()
{
	Velocity vel;

	vel.dx = 100;
	vel.dy = 100;

	vel.setDX(1.0);
	vel.setDY(0.0);

	vel.reverse();

	assert(vel.dx == -1.0);
	assert(vel.dy == 0.0);
}


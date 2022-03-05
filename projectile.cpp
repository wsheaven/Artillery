#include "projectile.h"

Projectile::Projectile()
{

	

}

void Projectile::reset()
{
}

void Projectile::fire(Position pos, double time, double angle, Velocity vel)
{
}

void Projectile::advance(double time)
{
}

void Projectile::draw(ogstream gout)
{
}

bool Projectile::flying()
{
	return false;
}

double Projectile::getAltitude()
{
	return 0.0;
}

Position Projectile::getPosition()
{
	return Position();
}

double Projectile::getFlightTime()
{
	return 0.0;
}

double Projectile::getFlightDistance()
{
	return 0.0;
}

double Projectile::getSpeed()
{
	return 0.0;
}

double Projectile::getCurrentTime()
{
	return 0.0;
}

void Projectile::setMass(double mass)
{
}

void Projectile::setRadius(double radius)
{
}

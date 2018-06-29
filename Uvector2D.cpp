#include "Uvector2D.h"


Uvector2d::Uvector2d() :x(0), y(0)
{}

Uvector2d::Uvector2d(float For_all) : x(For_all), y(For_all)
{}

Uvector2d& Uvector2d::operator=(Uvector2d& newUvector2d)
{
	x = newUvector2d.x;
	y = newUvector2d.y;
	return newUvector2d;
}

Uvector2d::Uvector2d(float X, float Y) :
	x(X), y(Y)
{
}


Uvector2d::~Uvector2d()
{
}

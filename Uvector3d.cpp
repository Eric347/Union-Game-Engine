#include "Uvector3d.h"




Uvector3d::Uvector3d():x(0),y(0),z(0)
{}

Uvector3d::Uvector3d(float For_all): x(For_all),y(For_all),z(For_all)
{}

Uvector3d& Uvector3d::operator=(Uvector3d& newUvector3d)
{
	x = newUvector3d.x;
	y = newUvector3d.y;
	z = newUvector3d.z;
	return newUvector3d;
}

Uvector3d::Uvector3d(float X, float Y, float Z):
	x(X),y(Y),z(Z)
{
}


Uvector3d::~Uvector3d()
{
}

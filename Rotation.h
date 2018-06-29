#pragma once
#ifndef ROTATION_H
#define ROTATION_H

#include "Vec3.h"
#include "Mat4x4.h"

class _declspec(dllexport) Rotation
{
public:
	Rotation();
	Rotation(const float angle,const Vec3 val);
	~Rotation();


	Vec3 GetVectorValue() { return Value; }
	Mat4x4 GetMatrix();

private:
	Vec3 Value;
	Mat4x4 mat;
	float Angle;
};

#endif
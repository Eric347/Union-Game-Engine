#pragma once
#ifndef SCALE_H
#define SCALE_H

#include "Vec3.h"
#include "Mat4x4.h"
class _declspec(dllexport) Scale
{
public:
	Scale();
	Scale(const Vec3 &vec);
	~Scale();

	Vec3 GetVectorValue() { return value; }
	Mat4x4 GetMatrixValue();

private:
	Vec3 value;
	Mat4x4 mat;
};

#endif
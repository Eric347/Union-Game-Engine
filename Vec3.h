#pragma once
#ifndef VEC3_H
#define VEC3_H


#include <glm/glm.hpp>

struct _declspec(dllexport) Vec3: public glm::vec3
{
public:
	Vec3();
	Vec3(float X,float Y, float Z);
	~Vec3();

public:
	float x, y, z;
};

#endif
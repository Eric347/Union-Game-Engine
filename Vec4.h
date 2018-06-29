#pragma once
// this vector is base on glm::vec4, You can choose to use this
// or choose to use #include <glm/glm.hpp>

#ifndef VEC4_H
#define VEC4_H

// this is how the base come from
#include <glm/glm.hpp>



struct _declspec(dllexport) Vec4 : public glm::vec4
{
public:
	Vec4();
	~Vec4();
};

#endif
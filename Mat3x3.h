#pragma once
#ifndef MAT3X3_H
#define MAT3X3_H

#include <glm/glm.hpp>

struct _declspec(dllexport) Mat3x3 : public glm::mat3
{
public:
	Mat3x3();
	Mat3x3(const float val);
	~Mat3x3();
};

#endif
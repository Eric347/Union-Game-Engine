#pragma once
#ifndef  MAT4X4_H
#define MAT4X4_H

#include <glm/glm.hpp>


// This Matrix is Base on glm Vector



struct _declspec(dllexport) Mat4x4 : public glm::mat4
{
public:
	Mat4x4();
	Mat4x4(const float val);
	Mat4x4& operator=(Mat4x4& valu);
	glm::mat4& operator=(glm::mat4& valu);
	~Mat4x4();
};


#endif // ! MAT4X4_H



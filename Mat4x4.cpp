#include "Mat4x4.h"



Mat4x4::Mat4x4(): glm::mat4()
{
}

Mat4x4::Mat4x4(const float val): glm::mat4(val)
{

}

Mat4x4& Mat4x4::operator=(Mat4x4& valu)
{
	return valu;
}

glm::mat4& Mat4x4::operator=(glm::mat4& valu)
{
	return valu;
}

Mat4x4::~Mat4x4()
{
}

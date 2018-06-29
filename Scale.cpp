#include "Scale.h"
#include <glm/gtx/transform.hpp>


Scale::Scale(): value()
{
}

Scale::Scale(const Vec3 &vec): value(vec)
{

}

Scale::~Scale()
{
}

Mat4x4 Scale::GetMatrixValue()
{
	mat = glm::scale(mat, value);
	return mat;
}
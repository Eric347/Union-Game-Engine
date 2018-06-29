#include "Rotation.h"
#include <glm/gtx/transform.hpp>


Rotation::Rotation(): Angle(45.0f),Value()
{
}

Rotation::Rotation(const float angle, const Vec3 val): Angle(angle),
Value(val)
{

}

Rotation::~Rotation()
{
}

Mat4x4 Rotation::GetMatrix()
{
	mat = glm::rotate(mat, Angle, Value);
	return mat;
}

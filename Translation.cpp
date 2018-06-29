#include "Translation.h"
#include <glm/gtx/transform.hpp>


Translation::Translation(): val()
{
}

Translation::Translation(const Vec3 pos):val(pos)
{

}

Vec3 Translation::GetTranslationVector()
{
	return val;
}

Mat4x4 Translation::GetTranslationMatrix()
{
	glm::mat4 m;
	m = glm::translate(m, val);
	mat = m;
	return mat;
}

Translation::~Translation()
{
}

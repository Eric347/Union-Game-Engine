#include "Transform.h"



Transform::Transform()
{
}

Transform::Transform(Translation &Tlate, Scale &sca, Rotation &rot):
	translation(Tlate),scale(sca),rotation(rot)
{}

Transform::Transform(Translation &Tlate): translation(Tlate)
{}

Transform& Transform::operator=(Transform& Other)
{
	translation = Other.translation;
	scale = Other.scale;
	rotation = Other.rotation;
	return Other;
}

Transform::~Transform()
{}


Mat4x4 Transform::GetTformMatrix()
{
	return translation.GetTranslationMatrix * rotation.GetMatrix * scale.GetMatrixValue;
}



void Transform::SetTranslate(Translation &Tlate)
{
	translation = Tlate;
}

void Transform::Set_Rotate(Rotation &rot)
{
	rotation = rot;
}

void Transform::SetScale(Scale &sca)
{
	scale = sca;
}

Vec3 Transform::Forward()
{
	Vec3 *fo = new Vec3(0, 0, translation.GetTranslationVector().z);
	return *fo;
}

Vec3 Transform::Up()
{
	Vec3 *fo = new Vec3(0, translation.GetTranslationVector().y,0);
	return *fo;
}

Vec3 Transform::Right()
{
	Vec3 *fo = new Vec3(translation.GetTranslationVector().x,0, 0);
	return *fo;
}
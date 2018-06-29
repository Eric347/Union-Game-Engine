#pragma once
#ifndef TRANSFORM_H
#define TRANSFORM_H


#include "Translation.h"
#include "Mat4x4.h"
#include "Scale.h"
#include "Rotation.h"


class _declspec(dllexport) Transform
{
public:
	Transform();
	Transform(Translation &Tlate, Scale &sca, Rotation &rot);
	Transform(Translation &Tlate);
	Transform& operator=(Transform& Other);
	~Transform();

	// SETTERS
	void SetTranslate(Translation &Tlate);
	void Set_Rotate(Rotation &rot);
	void SetScale(Scale &sca);

	//GETTERS
	Mat4x4 GetTformMatrix();
	Translation GetTranslation() { return translation; }
	Scale GetScale() { return scale; }
	Rotation GetRotate() { return rotation; }
	Vec3 Forward();
	Vec3 Up();
	Vec3 Right();
	// ALL VARIABLES
public:
	Translation translation;
	Scale scale;
	Rotation rotation;
};

#endif

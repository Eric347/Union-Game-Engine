#pragma once
#ifndef TRANSLATION_H
#define TRANSLATION_H

#include"Vec3.h"
#include"Mat4x4.h"



class _declspec(dllexport) Translation
{
public:
	Translation();
	Translation(const Vec3 pos);
	~Translation();

	//Get Vector
	Vec3 GetTranslationVector();
	Mat4x4 GetTranslationMatrix();
private:
	Vec3 val;
	Mat4x4 mat;

};

#endif
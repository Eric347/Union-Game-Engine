#pragma once
#ifndef UVECTOR3D_H
#define UVECTOR3D_H




class _declspec(dllexport) Uvector3d
{
public:
	Uvector3d(); // Default contructor
	Uvector3d(float For_all); // initialize all axis with 1 value
	Uvector3d(float X,float Y, float Z);// initialized with different values

	Uvector3d& operator=(Uvector3d& newUvector3d); //can assigned to a new Uvector3d
	~Uvector3d(); // destructor

public:
	float x;
	float y;
	float z;
};

#endif
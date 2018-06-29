#pragma once
#ifndef UVECTOR2D_H
#define UVECTOR2D_H





class _declspec(dllexport) Uvector2d
{
public:
	Uvector2d(); // Default contructor
	Uvector2d(float For_all); // initialize all axis with 1 value
	Uvector2d(float X, float Y);// initialized with different values

	Uvector2d& operator=(Uvector2d& newUvector2d); //can assigned to a new Uvector2d
	~Uvector2d(); // destructor

public:
	float x;
	float y;
};

#endif
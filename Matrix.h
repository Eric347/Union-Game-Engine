#pragma once
#ifndef MATRIX_H
#define MATRIX_H



template< typename U>
class _declspec(dllexport) Matrix4
{
public:
	Matrix4();
	Matrix4(U all);
	U& operator[](int i)
	{
		return mat[i][i];
	}

	U returnMat();

public:
	U mat[4][4];
};

#endif
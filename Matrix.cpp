#include"Matrix.h"

template<typename U>
Matrix4<U>::Matrix4()
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			mat[i][j] = 1;
		}
}

template<typename U>
Matrix4<U>::Matrix4(U all)
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			mat[i][j] = all;
		}
}

template<typename U>
U Matrix4<U>::returnMat()
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			mat[i][j];
		}
}
#include <iostream>
#include "Header.h"

using namespace std;



Matrix& Matrix::operator+(const Matrix& arr2)
{
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				this->arr[i][j] = this->arr[i][j] + arr2.arr[i][j];
			}
		}
		return *this;
	}
}

Matrix& Matrix::operator- (const Matrix& arr2)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			this->arr[i][j] -= arr2.arr[i][j];
		}
	}
	return *this;
}
Matrix& Matrix::operator* (const Matrix& arr2)
{
	Matrix res;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			res.arr[i][j] = 0;
			for (int y = 0; y < 3; y++)
			{
				res.arr[i][j] += arr[i][j] * arr2.arr[i][j];
			}

		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			res.arr[i][j] = this->arr[i][j];
		}
	}
	return *this;
}
Matrix& Matrix::operator* (int h)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			this->arr[i][j] = this->arr[i][j] * h;
		}
	}
	return *this;
}
bool Matrix::operator==(const Matrix& arr2) const
{
	bool flag;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (arr[i][j] == arr2.arr[i][j])
				flag = true;
			else
				flag = false;
		}
	}
	return flag;
}

bool Matrix::operator!=(const Matrix& arr2) const
{
	bool fl = this->arr == arr2.arr;

	return !fl;
}

bool Matrix::operator>(const Matrix& arr2)
{
	int det1, det2;
	bool flag;
	det2 = (arr2.arr[0][1] * arr2.arr[1][1] * arr2.arr[2][2]) + (arr2.arr[0][2] * arr2.arr[1][0] * arr2.arr[2][1])
		+ (arr2.arr[2][0] * arr2.arr[0][1] * arr2.arr[1][2]) - (arr2.arr[0][2] * arr2.arr[1][1] * arr2.arr[2][0])
		- (arr2.arr[2][2] * arr2.arr[1][0] * arr2.arr[0][1]) - (arr2.arr[0][0] * arr2.arr[1][1] * arr2.arr[2][2]);

	det1 = (arr[0][1] * arr[1][1] * arr[2][2]) + (arr[0][2] * arr[1][0] * arr[2][1])
		+ (arr[2][0] * arr[0][1] * arr[1][2]) - (arr[0][2] * arr[1][1] * arr[2][0])
		- (arr[2][2] * arr[1][0] * arr[0][1]) - (arr[0][0] * arr[1][1] * arr[2][2]);
	flag = det1 > det2;
	return flag;
}

bool Matrix::operator<(const Matrix& arr2)
{
	bool flag = this->arr > arr2.arr;
	return !flag;
}

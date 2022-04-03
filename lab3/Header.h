#pragma once
#include <iostream>

using namespace std;


class Matrix
{
private:
	int n;
	int m;
	int** arr;
public: //перемножение двух матриц, умножение матрицы на вещественное число, вычитание и сложение матриц, сравнение матриц
	Matrix() : n(3), m(3)
	{
		arr = new int* [3];
		for (int i = 0; i < 3; i++)
		{
			arr[i] = new int[3];
		}
	}
	void set()
	{
		cout << "enter the matrix elements" << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> arr[i][j];
			}
		}
	}
	void get()
	{
		cout << "matrix: " << endl;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << ' ' << arr[i][j];
			}
			cout << endl;
		}
	}

	Matrix& operator+ (const Matrix& arr2);
	Matrix& operator- (const Matrix& arr2);
	Matrix& operator* (const Matrix& arr2);
	Matrix& operator* (int h);
	bool operator== (const Matrix& arr2) const;
	bool operator!= (const Matrix& arr2) const;
	bool operator> (const Matrix& arr2);
	bool operator< (const Matrix& arr2);
	/*~Matrix()
    {
        for (int i = 0; i < 3; i++)
        {
            delete []mat[i];
        }

    }*/


};

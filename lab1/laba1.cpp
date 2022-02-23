#include <iostream>
#include "Header.h"
#include <cmath>

using namespace std;

int main()
{
	//6
	double a = 1.75790;
	double b;
	fun::task(a, b); // ссылки
	fun::task1(&a, &b); //указатели
	cout << a << " " << b;

	//1
	int s = 4, k = 5;
	fun::swap(s, k); // ссылки
	fun::swap1(&s, &k);//указатели
	cout << s << " " << k;

	//14
	int arr[3][3];
	fun::matrix(arr);//ссылки
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	fun::matrix(arr);
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	//9
	int r = 3;
	int comp = 5; // +i
	int h;
	fun::complex1(r, comp, h);//ссылки
	fun::complex2(&r, &comp, &h);//указатели
	cout << h << "+" << r << "i";

	return 0;
}
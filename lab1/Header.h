#pragma once

namespace fun
{    
	//6
	void task(double&, double&);// ссылки
	void task1(double*, double*);// указатели
	//1
	void swap(int&, int&);// ссылки
	void swap1(int*, int*);// указатели
	//14
	void matrix(int(&)[3][3]);//ссылки
	void matrix1(double[3][3], const double*);//указатели
	//9
	void complex1(int& ,int&, int& );//
	void complex2(int*, int*, int*);//
}


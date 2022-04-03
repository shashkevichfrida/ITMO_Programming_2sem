#include <iostream>
#include "Header.h"
#include "Header1.h"
#include <queue>

using namespace std;

int main()
{
	int h;
	Matrix arr;
	arr.set();
	arr.get();

	Matrix arr2;
	arr2.set();
	arr2.get();
	arr = arr + arr2;
	arr.get();

	
	arr = arr - arr2;
	arr.get();
	
	arr2.set();
	arr2.get();
	arr = arr * arr2;
	arr.get();

	arr2.set();
	arr2.get();
	cout << "Enter the number:" << endl;
	cin >> h;
	arr = arr * h;
	arr.get();

	arr2.set();
	arr2.get();
	bool fl;
	fl = arr == arr2;
	if (fl)
		cout << "matrix1 == matrix2" << endl;
	else
		cout << "matrix1 != matrix2" << endl;

	arr2.set();
	arr2.get();
	fl = arr != arr2;

	if (fl)
		cout << "False" << endl;
	else
		cout << "True" << endl;
	
	arr2.set();
	arr2.get();
	fl = arr < arr2;
	if (fl)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	fl = arr > arr2;

	if (fl)
		cout << "False" << endl;
	else
		cout << "True" << endl;


	cout << "task 2" << endl;
	Queue q = Queue();
	q.show();
	return 0;
}


	

	

	


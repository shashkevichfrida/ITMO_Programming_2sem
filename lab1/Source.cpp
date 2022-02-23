#include "Header.h"
#include <iostream>

namespace fun
{
	//6
	void task(double& ta, double& tb) // через указатели 
	{
		tb = int(ta * 100) / 100.0;

	}
	void task1(double* ta, double* tb) //через ссылки
	{
		*tb = int(*ta * 100) / 100.0;

	}

	//1
	void swap(int& ts, int& tk)//через указатели
	{
		int temp = ts;
		ts = tk;
		tk = temp;
	}
	void swap1(int* ts, int* tk)//через ссылки
	{
		int temp = *ts;
		*ts = *tk;
		*tk = temp;
	}

	//14
	void matrix(int(&ar)[3][3])
	{
		
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					int r = rand();
					ar[i][j] = r;
				}

			}

			int z;

			for (int i = 0; i < 2; i++)
			{
				for (int j = i + 1; j < 3; j++)
				{
					z = ar[i][j];
					ar[i][j] = ar[j][i];
					ar[j][i] = z;
				}
			}
		
	}
	
	void matrix1(int ar[3][3])
	{
		
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					int r = rand();
					ar[i][j] = r;
				}

			}

			int z;

			for (int i = 0; i < 2; i++)
			{
				for (int j = i + 1; j < 3; j++)
				{
					z = ar[i][j];
					ar[i][j] = ar[j][i];
					ar[j][i] = z;
				}
			}
		
	}

	//9
	void complex1(int& tr, int& tcomp, int& th)
	{
		th = tcomp * tr;
	}
	void complex2(int* tr, int* tcomp, int* th)
	{
		*th = *tcomp * *tr;
	}	
}
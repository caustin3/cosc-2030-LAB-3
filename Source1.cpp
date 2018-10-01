//Chase Austin Date:1/OCT/2018
//COSC 2030 lab 3 

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

short sum_1(short n);

long sum_2(long n);

float Factorial_1(long n);

double Factorial_2(long n);

float f_1(int n);

double f_2(int n);

int main()
{
	int n = 0 , done = 0;

	while (!(done == 1))
	{
		/*cout << "input n for sum_1";
		cin >> n;*/
		cout << "Sum of 1 to n :" << sum_1(n) << endl;
		cout << "input n for sum_2";
		cin >> n;
		cout << "Sum of 1 to n :" << sum_2(n) << endl;
		/*cout << "input n for Factorial_1";
		cin >> n;*/
		cout << "Factorial of n :" << Factorial_1(n) << endl;
		/*cout << "input n for Factorial_2";
		cin >> n;*/
		cout << "Factorial of n :" << Factorial_2(n) << endl;
		/*cout << "input n for f_1";
		cin >> n;*/
		cout << "f_1 of n :" << f_1(n) << endl;
		/*cout << "input n for f_2";
		cin >> n;*/
		cout << "f_2 of n :" << f_2(n) << endl;
		cout << endl << "If done input 1 " << endl;
		cin >> done;
		cout << endl;
	}
	cout << "float" << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cout << "double" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}

//problem 1
short sum_1(short n)
{
	bool out = true;
	short C_Sum = 0;
	short Before_Sum = 0;
	if (n <= 0)
	{
		return 0;
	}
	else
	{
		for (short index = 1; !(index > n); index++)
		{
			Before_Sum = C_Sum;
			C_Sum = C_Sum + index;

			if (((C_Sum < Before_Sum) || (C_Sum < 0)) && out)
			{
				cout << "**overflow for sun_1 at:" << index << " **\t";
				out = false;
			}

		}
	}
	return C_Sum;
}

//problem 3
long sum_2(long n)
{
	bool out = true;
	long C_Sum = 0;
	long Before_Sum = 0;
	if (n <= 0)
	{
		return 0;
	}
	else
	{
		for (long index = 1; !(index > n); index++)
		{
			Before_Sum = C_Sum;
			C_Sum = C_Sum + index;

			if (((C_Sum < Before_Sum) || (C_Sum < 0)) && out)
			{
				cout << "**overflow  for sun_2 at:" << index << " **\t";
				out = false;
			}
		}
	}
	return C_Sum;
}

//problem 
float Factorial_1(long n)
{
	bool out = true;
	float save = 1, before_save = 0;
	float input;
	if (n <= 0)
	{
		return 0;
	}
	else
	{
		for (int index = 1; !(index > n); index++)
		{
			input = index;
			before_save = save;
			save = index * save;
			if (((save < before_save) || (save < 0)) && out)
			{
				cout << "**overflow  for f_2 at:" << index << " **\t";
				out = false;
			}
		}
	}
	return save;
}
//problem 5
double Factorial_2(long n)
{
	bool out = true;
	double save = 1, before_save = 0;
	double input;
	if (n <= 0)
	{
		return 0;
	}
	else
	{
		for (int index = 1; !(index > n); index++)
		{
			input = index;
			before_save = save;
			save = index * save;
			if (((save < before_save) || (save < 0)) && out)
			{
				cout << "**overflow  for f_2 at:" << index << " **\t";
				out = false;
			}
		}
	}
	return save;
}

//problem 6
float f_1(int n)
{
	bool out = true;
	float save = 0, before_save = 0;
	float input;
	if (n <= 1)
	{
		return 0;
	}
	else
	{
		for (int index = 1; !(index > n); index++)
		{
			input = index;
			save = (1 / input) + save;
			if (((save < before_save) || (save < 0)) && out)
			{
				cout << "**overflow  for f_2 at:" << index << " **\t";
				out = false;
			}
		}
	}
	return save - 1;
}

double f_2(int n)
{
	bool out = true;
	double save = 0, before_save = 0;
	double input;
	if (n <= 1)
	{
		return 0;
	}
	else
	{
		for (int index = 1; !(index > n); index++)
		{
			input = index;
			save = (1 / input) + save;
			if (((save < before_save) || (save < 0)) && out)
			{
				cout << "**overflow  for f_2 at:" << index << " **\t";
				out = false;
			}
		}
	}
	return save - 1;
}


//ECE 2305 Programming Project 08

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 0;
	double** a;
	double* b;
	double* x;

	cout << "Enter the number of equations" << endl;
	cin >> n;
	
	a = new double* [n];
	b = new double [n];
	x = new double [n];
	for (int y = 0; y < n; y++)
	{
		a[y] = new double[n];
	}
	cout << "Enter coefficients" << endl;
	for (int l = 0; l < n; l++)
	{
		for (int f = 0; f < n; f++)
		{
			cout << "x" << f << " = ";
			cin >> a[l][f];
		}
		cout << "b" << l << " = ";
		cin >> b[l];
		cout << endl;
	}

	for (int k = 0; k <= n - 2; k++)
	{
		if (a[k][k] == 0)
		{
			cout << "Division by zero error" << endl;
		}
		for (int i = k + 1; i < n; i++)
		{
			double m = a[i][k] / (1.0 * a[k][k]);
			for (int j = k; j < n; j++)
			{
				a[i][j] -=  m * a[k][j];
			}
			b[i] -= m * b[k];
		}
	}

	x[n - 1] = b[n - 1] / a[n - 1][n - 1];
	for (int k = n - 1; k >= 0; k--)
	{
		int sum = 0;
		for (int j = k + 1; j <= n - 1; j++)
		{
			sum += a[k][j] * x[j];
		}
		x[k] = (b[k] - sum) / a[k][k];
	}

	cout << "The solution is:" << endl;
	for (int e = 0; e < n; e++)
	{
		cout << "x" << e << " = " << x[e] << endl;
	}

	system("pause");
	return 0;
}
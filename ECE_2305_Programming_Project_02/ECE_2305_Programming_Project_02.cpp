//ECE Programming Project 02

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
	double a, b, c;

	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	cout << "Enter c" << endl;
	cin >> c;

	if (a == 0)
	{
		if (b == 0)
		{
			cout << "No solution." << endl;
		}
		else
		{
			cout << "One real solution." << endl;
			cout << "x = " << (-1 * c) / b << endl;
		}
	}
	else
	{
		if (b * b - 4 * a * c > 0)
		{
			cout << "Two real unequal solutions." << endl;
			cout << "x1 = " << (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
			cout << "x2 = " << (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
		}
		else if (b * b - 4 * a * c == 0)
		{
			cout << "Two real equal solutions." << endl;
			cout << "x = " << (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
		}
		else if (b * b - 4 * a * c < 0)
		{
			cout << "Two complex conjugate solutions." << endl;
			cout << "x1 = " << -1 * b / (2 * a) << "+j" << sqrt(4 * a * c - b * b) / (2 * a) << endl;
			cout << "x2 = " << -1 * b / (2 * a) << "-j" << sqrt(4 * a * c - b * b) / (2 * a) << endl;
		}
	}

	system("pause");
	return 0;
}
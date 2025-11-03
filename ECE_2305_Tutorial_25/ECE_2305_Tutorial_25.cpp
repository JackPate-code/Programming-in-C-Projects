//ECE 2305 Tutorial 25

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a[2][2] = { {2.3, 4.1}, {6.2, 8.3} };
	double b = 258.6;
	double* c;
	double* d;
	c = a[0];
	d = &b;

	//c = c + 3;
	//*c = 10.4;
	//*d = 517.2;

	cout << "Variable Name\tAddress\t\tValue" << endl;
	cout << "a[0][0]\t" << a[0] << "\t\t" << a[0][0] << endl;
	cout << "a[0][1]\t" << a[0] + 1 << "\t\t" << a[0][1] << endl;
	cout << "a[1][0]\t" << a[1] << "\t\t" << a[1][0] << endl;
	cout << "a[1][1]\t" << a[1] + 1 << "\t\t" << a[1][1] << endl;
	cout << "b\t" << &b << "\t\t" << b << endl;
	cout << "*c\t" << c << "\t\t" << c << endl;
	cout << "*d\t" << d << "\t\t" << d << endl;

	system("pause");
	return 0;
}
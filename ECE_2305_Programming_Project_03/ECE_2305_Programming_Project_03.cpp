// ECE 2305 Programming Project 03

#include <iostream>
#include <cmath>
using namespace std;

double const PI = 4 * atan(1);

int main()
{
	cout << "N\t" << "Approximate Value\t" << "Actual Value\t\t" << "% Error" << endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(15);
	double AppV = 0.0;
	for (int N = 0; N < 16; N++)
	{
		AppV += ((1 * pow(-1,N)) * (4.0 / (2 * N + 1)));
		double Err = ((AppV - PI) * 100) / PI;
		cout << N << "\t" << AppV << "\t" << PI << "\t" << Err << endl;
	}

	system("pause");
	return 0;
}
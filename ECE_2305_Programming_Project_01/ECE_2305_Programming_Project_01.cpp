// ECE 2305 Programming Project 01
// Jackson Pate 
// January 28, 2025 

#include <iostream> 
#include <cstdlib> 
#include <cmath> 
using namespace std;

int main()
{
	const double Vdc = 10.0;
	const double R = 10.0 * pow(10, 3);
	const double C = 100.0 * pow(10, -12);
	double RC = R * C;
	double t, time;
	double i, v;

	cout << "RC Circuit" << endl;
	cout << "R = " << R << endl;
	cout << "C = " << C << endl;
	cout << "RC = " << RC << endl;
	cout << "Please input a time in micro-seconds: ";
	cin >> time;

	t = time * pow(10, -6);
	i = (Vdc / R) * (exp((-1 * t) / RC)) * pow(10, 3);
	v = Vdc * (1 - exp((-1 * t) / RC));

	cout << "i = " << i << " mA" << endl;
	cout << "v = " << v << " volts" << endl;

	system("pause");
	return 0;
}

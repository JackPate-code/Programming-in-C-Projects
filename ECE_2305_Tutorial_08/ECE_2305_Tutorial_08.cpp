// ECE 2305 Daily Programming Tutorial 08
// Jackson Pate
// January 27, 2025

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 4 * atan(1.0);
	cout << "Pi: " << PI << endl;
	const double E = exp(1.0);
	cout << "e: " << E << endl;
	cout << "absolute value of -6: " << abs(-6) << endl;
	cout << "absolute value of -6.4: " << abs(-6.4) << endl;
	cout << "30 degrees into radians: " << 30 * PI / 180 << endl;
	cout << "3 pi / 4 into degrees: " << (3 * PI / 4) * 180 / PI << endl;
	cout << "sin(30): " << sin(PI / 60) << endl;
	cout << "cos(30): " << cos(PI / 60) << endl;
	cout << "tan(30): " << tan(PI / 60) << endl;
	cout << "ceil(8.6): " << ceil(8.6) << "\tceil(8.4): " << ceil(8.4) << "\tceil(-8.4): " << ceil(-8.4) << "\tceil(-8.6): " << ceil(-8.6) << endl;
	cout << "floor(8.6): " << floor(8.6) << "\tfloor(8.4): " << floor(8.4) << "\tfloor(-8.4): " << floor(-8.4) << "\tfloor(-8.6): " << floor(-8.6) << endl;
	cout << "round(8.6): " << round(8.6) << "\tround(8.4): " << round(8.4) << "\tround(-8.4): " << round(-8.4) << "\tround(-8.6): " << round(-8.6) << endl;
	cout << "20log10(100): " << 20 * log10(100.0) << endl;
	cout << "sqrt(2): " << sqrt(2.0) << endl;
	cout << "4^3: " << pow(4.0, 3.0) << endl;
	cout << "random number: " << rand() << endl;
	cout << "random max number: " << RAND_MAX << endl;

	system("pause");
	return 0;
}
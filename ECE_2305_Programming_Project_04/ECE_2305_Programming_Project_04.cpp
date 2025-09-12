// ECE 2305 Programming Project 04

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
const double PI = 4 * atan(1);

void rectangForm(double &real, double &imag)
{
	cout << "Enter real part" << endl;
	cin >> real;
	cout << "Enter imaginary part" << endl;
	cin >> imag;
}

void rect_to_polar(double &real, double &imag, double &mag, double &ang)
{
	mag = sqrt(real * real + imag * imag);
	ang = atan2(imag, real) * 180 / PI;
}

void polarForm(double &mag, double &ang)
{
	cout << "Enter the magnitude" << endl;
	cin >> mag;
	cout << "Enter the angle" << endl;
	cin >> ang;
}
void polar_to_rect(double &mag, double &ang, double &real, double &imag)
{
	real = mag * cos((1.0 * ang) * PI / 180);
	imag = mag * sin((1.0 * ang) * PI / 180);
}

void addComplex(double &realA, double &imagA, double &realB, double &imagB, double &realC, double &imagC)
{
	realC = realA + realB;
	imagC = imagA + imagB;
}

void conjComplex(double &realA, double &imagA, double &realC, double &imagC)
{
	realC = realA;
	imagC = -1 * imagA;
}

void multComplex(double &realA, double &imagA, double &realB, double &imagB, double &realC, double &imagC)
{
	realC = realA * realB - imagA * imagB;
	imagC = realA * imagB + realB * imagA;
}

void divComplex(double &realA, double &imagA, double &realB, double &imagB, double &realC, double &imagC)
{
	realC = (realA * realB + imagA + imagB) / (realB * realB + imagB * imagB);
	imagC = (imagA * realB - realA * imagB) / (realB * realB + imagB * imagB);
}

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	double ReA = 0.0, ImA = 0.0, MagA = 0.0, AngA = 0.0;
	double ReB = 0.0, ImB = 0.0, MagB = 0.0, AngB = 0.0;
	double ReC = 0.0, ImC = 0.0, MagC = 0.0, AngC = 0.0;
	int choice;

	do
	{
		cout << "Complex Number A: Real: " << ReA << " Imaginary: j" << ImA << " Magnitude: " << MagA << " Angle: " << AngA << endl;
		cout << "Complex Number A: Real: " << ReB << " Imaginary: j" << ImB << " Magnitude: " << MagB << " Angle: " << AngB << endl;
		cout << "Complex Number A: Real: " << ReC << " Imaginary: j" << ImC << " Magnitude: " << MagC << " Angle: " << AngC << "\n\n" << endl;
		cout << "Make a choice: \n" << endl;
		cout << "1. Enter Complex Number A in Rectangular Form." << endl;
		cout << "2. Enter Complex Number A in Polar Form." << endl;
		cout << "3. Enter Complex Number B in Rectangular Form." << endl;
		cout << "4. Enter Complex Number B in Polar Form." << endl;
		cout << "5. Add the two Complex Numbers: C = A + B." << endl;
		cout << "6. Find the Complex Conjugate: C = A*" << endl;
		cout << "7. Multiply the two Complex Numbers: C = AB." << endl;
		cout << "8. Divide the two Complex Numbers: C = A / B." << endl;
		cout << "9. End the program." << endl;
		cout << "\nEnter a choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			rectangForm(ReA, ImA);
			rect_to_polar(ReA, ImA, MagA, AngA);
			break;
		case 2:
			polarForm(MagA, AngA);
			polar_to_rect(MagA, AngA, ReA, ImA);
			break;
		case 3:
			rectangForm(ReB, ImB);
			rect_to_polar(ReB, ImB, MagB, AngB);
			break;
		case 4:
			polarForm(MagB, AngB);
			polar_to_rect(MagB, AngB, ReB, ImB);
			break;
		case 5:
			addComplex(ReA, ImA, ReB, ImB, ReC, ImC);
			rect_to_polar(ReC, ImC, MagC, AngC);
			break;
		case 6:
			conjComplex(ReA, ImA, ReC, ImC);
			rect_to_polar(ReC, ImC, MagC, AngC);
			break;
		case 7:
			multComplex(ReA, ImA, ReB, ImB, ReC, ImC);
			rect_to_polar(ReC, ImC, MagC, AngC);
			break;
		case 8:
			divComplex(ReA, ImA, ReB, ImB, ReC, ImC);
			rect_to_polar(ReC, ImC, MagC, AngC);
			break;
		case 9:
			cout << "End the program" << endl;
			break;
		}
	} while (choice != 9);

	system("pause");
	return 0;
}
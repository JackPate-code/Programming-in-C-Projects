// ECE 2305 Programming Project 10

#include <iostream>
#include <cmath>
using namespace std;
const double PI = 4 * atan(1);

class complex
{
private:
	double real;
	double imag;
public:
	complex() { real = 1; imag = 1; }
	complex(double r, double i);
	void realInput(double r);
	void imagInput(double i);
	double getReal();
	double getImag();
	double getMag();
	double getAng();
	complex getConj();
	void rect();
	void polar();
	complex operator + (complex& A);
	complex operator - (complex& A);
	complex operator * (complex& A);
	complex operator / (complex& A);
};

complex::complex(double r, double i)
{
	real = r;
	imag = i;
}

void complex::realInput(double r)
{
	real = r;
}

void complex::imagInput(double i)
{
	imag = i;
}

double complex::getReal()
{
	return real;
}

double complex::getImag()
{
	return imag;
}

double complex::getMag()
{
	return sqrt(real * real + imag * imag);
}

double complex::getAng()
{
	return atan2(imag, real) * 180 / PI;
}

complex complex::getConj()
{
	double tempR = getReal();
	double tempI = -1 * getImag();
	complex tempComp(tempR, tempI);
	return tempComp;
}

void complex::rect()
{
	cout << getReal() << " + j" << getImag() << endl;
}

void complex::polar()
{
	cout << getMag() << " at " << getAng() << " degrees" << endl;
}

complex complex::operator + (complex& A)
{
	double tempR = real + A.real;
	double tempI = imag + A.imag;
	complex tempComp(tempR, tempI);
	return tempComp;
}

complex complex::operator - (complex& A)
{
	double tempR = real - A.real;
	double tempI = imag - A.imag;
	complex tempComp(tempR, tempI);
	return tempComp;
}

complex complex::operator * (complex& A)
{
	double tempR = real * A.real - imag * A.imag;
	double tempI = imag * A.real + real * A.imag;
	complex tempComp(tempR, tempI);
	return tempComp;
}

complex complex::operator / (complex& A)
{
	double tempR = (real * A.real + imag * A.imag) / (real * real + imag * imag);
	double tempI = (real * A.imag - A.real * imag) / (real * real + imag * imag);
	complex tempComp(tempR, tempI);
	return tempComp;
}

int main()
{
	//Make object A, B, C as complex and assign values
	complex A;
	complex B(5, 5);
	complex C(10, 10);

	A.rect();
	B.rect();
	C.rect();
	cout << "\n" << endl;
	A.polar();
	B.polar();
	C.polar();
	cout << "\n" << endl;
	cout << "New real value for C" << endl;
	C.realInput(9);
	cout << C.getReal() << endl;
	cout << "New imaginary value for C" << endl;
	C.imagInput(-6);
	cout << C.getImag() << endl;
	C.rect();
	cout << "The real value of A is " << A.getReal() << endl;
	cout << "The imaginary value of A is j" << A.getImag() << endl;
	cout << "The magnitude of B is " << B.getMag() << endl;
	cout << "The angle of B is " << B.getAng() << " degrees" << endl;
	cout << "Taking the conjugate of A" << endl;
	C = A.getConj();
	C.rect();
	cout << "A + B" << endl;
	C = A + B;
	C.rect();
	cout << "B - A" << endl;
	C = B - A;
	C.rect();
	cout << "A * B" << endl;
	C = A * B;
	C.rect();
	cout << "B / A" << endl;
	C = B / A;
	C.rect();

	system("pause");
	return 0;
}
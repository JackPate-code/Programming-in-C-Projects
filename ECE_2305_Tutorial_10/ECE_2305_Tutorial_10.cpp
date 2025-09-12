// ECE 2305 _ Tutorial 10
// Boolean Operations

#include<iostream>
using namespace std;

int main()
{
	bool A;
	bool B;

	cout << "A \t(!A)" << endl;
	A = 0, cout << A << "\t" << (!A) << endl;
	A = 1, cout << A << "\t" << (!A) << endl;
	cout << endl;

	cout << "A B \t(A && B)" << endl;
	A = 0, B = 0, cout << A << " " << "B" << "\t" << (A && B) << endl;
	A = 0, B = 1, cout << A << " " << "B" << "\t" << (A && B) << endl;
	A = 1, B = 0, cout << A << " " << "B" << "\t" << (A && B) << endl;
	A = 1, B = 1, cout << A << " " << "B" << "\t" << (A && B) << endl;
	cout << endl;

	cout << "A B \t(A || B)" << endl;
	A = 0, B = 0, cout << A << " " << "B" << "\t" << (A || B) << endl;
	A = 0, B = 1, cout << A << " " << "B" << "\t" << (A || B) << endl;
	A = 1, B = 0, cout << A << " " << "B" << "\t" << (A || B) << endl;
	A = 1, B = 1, cout << A << " " << "B" << "\t" << (A || B) << endl;
	cout << endl;

	cout << "A B \t!(A && B)" << endl;
	A = 0, B = 0, cout << A << " " << "B" << "\t" << !(A && B) << endl;
	A = 0, B = 1, cout << A << " " << "B" << "\t" << !(A && B) << endl;
	A = 1, B = 0, cout << A << " " << "B" << "\t" << !(A && B) << endl;
	A = 1, B = 1, cout << A << " " << "B" << "\t" << !(A && B) << endl;
	cout << endl;

	cout << "A B \t!(A || B)" << endl;
	A = 0, B = 0, cout << A << " " << "B" << "\t" << !(A || B) << endl;
	A = 0, B = 1, cout << A << " " << "B" << "\t" << !(A || B) << endl;
	A = 1, B = 0, cout << A << " " << "B" << "\t" << !(A || B) << endl;
	A = 1, B = 1, cout << A << " " << "B" << "\t" << !(A || B) << endl;
	cout << endl;

	cout << "A B \t(A && !B || !A && B)" << endl;
	A = 0, B = 0, cout << A << " " << "B" << "\t" << (A && !B || !A && B) << endl;
	A = 0, B = 1, cout << A << " " << "B" << "\t" << (A && !B || !A && B) << endl;
	A = 1, B = 0, cout << A << " " << "B" << "\t" << (A && !B || !A && B) << endl;
	A = 1, B = 1, cout << A << " " << "B" << "\t" << (A && !B || !A && B) << endl;
	cout << endl;

	cout << "A B \t(A && B || !A && !B)" << endl;
	A = 0, B = 0, cout << A << " " << "B" << "\t" << (A && B || !A && !B) << endl;
	A = 0, B = 1, cout << A << " " << "B" << "\t" << (A && B || !A && !B) << endl;
	A = 1, B = 0, cout << A << " " << "B" << "\t" << (A && B || !A && !B) << endl;
	A = 1, B = 1, cout << A << " " << "B" << "\t" << (A && B || !A && !B) << endl;
	cout << endl;
	system("pause");
	return 0;
}
// ECE 2305 Daily Programming Tutorial 04
// Jackson Pate
// January 27, 2025

#include <iostream>
using namespace std;

int main()
{
	double Done;
	double Dtwo;
	double Dthree;
	double Dfour;
	double Dfive;

	Done = 10.0;
	Dtwo = 13.456;
	Dthree = 67.2;
	Dfour = 45.7;
	Dfive = 1.11;

	cout << "Name Done\t" << "Address " << &Done << "\tData " << Done << endl;
	cout << "Name Dtwo\t" << "Address " << &Dtwo << "\tData " << Dtwo << endl;
	cout << "Name Dthree\t" << "Address " << &Dthree << "\tData " << Dthree << endl;
	cout << "Name Dfour\t" << "Address " << &Dfour << "\tData " << Dfour << endl;
	cout << "Name Dfive\t" << "Address " << &Dfive << "\tData " << Dfive << endl;

	int spacing = (int)&Dtwo - (int)&Done;
	cout << "The spacing between adjacent memory locations is " << spacing << endl;

	system("pause");
	return 0;
}
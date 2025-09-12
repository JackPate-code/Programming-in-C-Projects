// ECE 2305 Daily Programming Tutorial 03
// Jackson Pate
// January 27, 2025

#include <iostream>
using namespace std;

int main()
{
	int One;
	int Two;
	int Three;
	int Four;
	int Five;

	One = 15;
	Two = 208;
	Three = 31;
	Four = 890;
	Five = 45;

	cout << "Memory Map" << endl;
	cout << "Name One\t" << "Address " << &One << "\tData " << One << endl;
	cout << "Name Two\t" << "Address " << &Two << "\tData " << Two << endl;
	cout << "Name Three\t" << "Address " << &Three << "\tData " << Three << endl;
	cout << "Name Four\t" << "Address " << &Four << "\tData " << Four << endl;
	cout << "Name Five\t" << "Address " << &Five << "\tData " << Five << endl;

	int spacing = (int)&Two - (int) & One;
	cout << "The spacing between adjacent memory locations is " << spacing << endl;


	system("pause");
	return 0;
}
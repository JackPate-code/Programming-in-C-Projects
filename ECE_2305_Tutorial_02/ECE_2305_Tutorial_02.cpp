// ECE 2305 Daily Programming Tutorial 02
// Jackson Pate
// January 21, 2025

#include <iostream>
using namespace std;

int main()
{

	int IntVar = 100;
	cout << "The address of IntVar is: " << &IntVar << endl;
	cout << "The IntVar requires " << sizeof(IntVar) << " bytes" << endl;
	cout << "The value of IntVar is: " << IntVar << endl;
	cout << endl;
	double DoubVar = 100.1;
	cout << "The address of DoubVar is: " << &DoubVar << endl;
	cout << "The DoubVar requires " << sizeof(DoubVar) << " bytes" << endl;
	cout << "The value of DoubVar is: " << DoubVar << endl;
	cout << endl;
	char CharVar = 'f';
	cout << "The address of CharVar is: " << (void*)&CharVar << endl;
	cout << "The CharVar requires " << sizeof(CharVar) << " bytes" << endl;
	cout << "The value of CharVar is: " << CharVar << endl;
	cout << "The ASCII value of CharVar is: " << int(CharVar) << endl;
	cout << endl;
	bool BoolVar = true;
	cout << "The address of BoolVar is: " << &BoolVar << endl;
	cout << "The BoolVar requires " << sizeof(BoolVar) << " bytes" << endl;
	cout << "The value of BoolVar is: " << BoolVar << endl;
	cout << endl;

	system("pause");
	return 0;
}
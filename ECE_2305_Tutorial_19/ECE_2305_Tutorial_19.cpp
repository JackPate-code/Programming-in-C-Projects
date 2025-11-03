// ECE 2305 Tutorial 19

#include <iostream>
#include <cmath>
using namespace std;

void function(int n)
{
	cout << "Welcome to function for int\n" << endl;
	cout << "Memory Map\n";
	cout << "Address: " << &n << "\t" << "Value: " << n << endl;
}

void function(double n)
{
	cout << "Welcome to function for double\n" << endl;
	cout << "Memory Map\n";
	cout << "Address: " << &n << "\t" << "Value: " << n << endl;
}

int main()
{
	function(3);
	cout << "\nWelcome back to main\n" << endl;
	function(3.5);
	cout << "\nWelcome back to main\n" << endl;

	system("pause");
	return 0;
}
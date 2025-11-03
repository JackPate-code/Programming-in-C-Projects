// ECE 2305 Tutorial 18

#include <iostream>
#include <cmath>
using namespace std;

int functionA(int n)
{
	n = n + 1;
	cout << "Number of times functionA called: " << n << endl;
	cout << "Memory Map" << endl;
	cout << "Address: " << &n << "\t" << "Value: " << n << endl;
	return n;
}

int functionB(int n)
{
	n = n + 1;
	cout << "Number of times functionB called: " << n << endl;
	cout << "Memory Map" << endl;
	cout << "Address: " << &n << "\t" << "Value: " << n << endl;
	return n;
}

int main()
{
	int a = 0;
	int b = 0;
	int choice;

	cout << "Memory Map" << endl;
	cout << "Address: " << &a << "\t" << "Value: " << a << endl;
	cout << "Address: " << &b << "\t" << "Value: " << b << endl;
	do
	{
		cout << "\nMenu:" << endl;
		cout << "1. functionA" << endl;
		cout << "2. functionB" << endl;
		cout << "3. End" << endl;
		cout << "Enter your choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			a = functionA(a);
			break;
		case 2:
			b = functionB(b);
			break;
		case 3:
			cout << "End" << endl;
			break;
		}
	}
	while (choice != 3);

	system("pause");
	return 0;
}
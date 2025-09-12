// ECE 2305 Tutorial 13

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int choice;
	do
	{
		cout << "Menu:\n" << endl;
		cout << "1. Option 1\n" << endl;
		cout << "2. Option 2\n" << endl;
		cout << "3. End\n" << endl;
		cout << "Enter your choice: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Option 1" << endl;
			break;
		case 2:
			cout << "Option 2" << endl;
			break;
		case 3:
			cout << "End" << endl;
			break;
		default:
			cout << "Make a proper choice" << endl;
		}
		system("pause");
		system("cls");
	} while (choice != 3);

	return 0;
}
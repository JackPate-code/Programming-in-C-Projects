//ECE 2305 Tutorial 28

#include <iostream>
#include <cmath>
using namespace std;

struct fruit
{
	string name;
	int quantity;
	double price;
};

int main()
{
	fruit basket[3];

	basket[0] = { "banana", 36, 1.79 };
	basket[1] = { "apple", 41, 1.00 };
	basket[2] = { "orange", 22, 0.89 };

	cout << "Name\tQuantity\tPrice" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << basket[i].name << "\t";
		cout << basket[i].quantity << "\t\t";
		cout << basket[i].price << "\t";
		cout << endl;
	}

	system("pause");
	return 0;
}
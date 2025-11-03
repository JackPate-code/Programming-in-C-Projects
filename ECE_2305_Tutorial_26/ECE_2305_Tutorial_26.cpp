//ECE 2305 Tutorial 26

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
	fruit banana;
	banana.name = "banana";
	banana.quantity = 47;
	banana.price = 1.79;

	cout << "The fruit name is: " << banana.name << endl;
	cout << "The quantity of the fruit is: " << banana.quantity << endl;
	cout << "The price of the fruit is: $" << banana.price << endl;

	system("pause");
	return 0;
}
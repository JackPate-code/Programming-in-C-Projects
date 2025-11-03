//ECE 2305 Tutorial 27

#include <iostream>
#include <cmath>
using namespace std;

struct fruit
{
	string name;
	int quantity;
	double price;
};

double purchase(fruit& f, int p)
{
	double price = p * f.price;
	f.quantity -= p;
	return price;
}

int main()
{
	fruit banana;
	banana.name = "banana";
	banana.quantity = 47;
	banana.price = 1.79;

	int choice = 0;

	cout << "Enter number of pieces of " << banana.name << " you want to purchase" << endl;
	cin >> choice;

	if (choice <= banana.quantity)
	{
		cout << "The cost of your purchase is $" << purchase(banana, choice) << endl;
		cout << "Quantity of " << banana.name << ": " << banana.quantity << endl;
	}
	else
	{
		cout << "There is not enough " << banana.name << "s available for your choice." << endl;
	}

	system("pause");
	return 0;
}
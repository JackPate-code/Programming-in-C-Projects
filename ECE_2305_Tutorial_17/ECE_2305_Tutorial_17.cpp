// ECE 2305 Tutorial 17

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double sum = 0.0;
	for (int n = 1; n < 101; n++)
	{
		sum += (1.0 / (n * n));
	}
	cout << "The sum is: " << sum << endl;

	system("pause");
	return 0;
}
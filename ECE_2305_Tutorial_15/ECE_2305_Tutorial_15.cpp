// ECE 2305 Tutorial 15

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "n\t" << "n^2\t" << "n^3" << endl;
	for (int n = 0; n < 11; n++)
	{
		cout << n << "\t" << n * n << "\t" << n * n * n << endl;
	}

	system("pause");
	return 0;
}
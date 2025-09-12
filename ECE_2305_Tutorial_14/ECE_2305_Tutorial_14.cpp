// ECE 2305 Tutorial 14

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	int n = 0;
	cout << "n\t" << "n^2" << endl;
	while (n * n < 75)
	{
		cout << n << "\t" << n * n << endl;
		n++;
	}
	system("pause");
	return 0;
}
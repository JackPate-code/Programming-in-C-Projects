// ECE 2305 Tutorial 16

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << i << "\t";
		for (int n = 1; n < 11;n++)
		{
			cout << i * n << "\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
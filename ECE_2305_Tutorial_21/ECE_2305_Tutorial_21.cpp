// ECE 2305 Tutorial 21

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
	int ans = 0;
	cout << "Memory Map for Function factorial before the function call" << endl;
	cout << "n\t" << &n << "\t" << n << endl;
	cout << "ans\t" << &ans << "\t" << ans << endl;
	cout << endl;

	if (n <= 1)
	{
		ans = 1;
	}
	else
	{
		ans = n * factorial(n - 1);
	}

	cout << "Memory Map for Function factorial after the function call" << endl;
	cout << "n\t" << &n << "\t" << n << endl;
	cout << "ans\t" << &ans << "\t" << ans << endl;
	cout << endl;

	return ans;
}

int main()
{
	int n = 0;
	cout << "please enter an integer: " << endl;
	cin >> n;
	cout << endl;
	cout << "Memory Map for Function Main before function call" << endl;
	cout << "n\t" << &n << "\t" << n << endl;
	cout << endl;

	cout << "n! = " << factorial(n) << endl;
	cout << endl;

	cout << "Memory Map for Function Main after function call" << endl;
	cout << "n\t" << &n << "\t" << n << endl;
	cout << endl;

	system("pause");
	return 0;
}
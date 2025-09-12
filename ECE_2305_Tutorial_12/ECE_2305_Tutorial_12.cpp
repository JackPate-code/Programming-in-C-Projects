// ECE 2305 _ Tutorial 12

#include<iostream>  
using namespace std;

int main()
{
	int a;

	cout << "Enter a" << endl;
	cin >> a;

	if (a < 5) {
		cout << "a < 5" << endl;
	}
	else if (a < 10) {
		cout << "5 <= a < 10" << endl;
	}
	else if (a < 15) {
		cout << "10 <= a < 15" << endl;
	}
	else if (a < 20) {
		cout << "15 <= a < 20" << endl;
	}
	else
	{
		cout << "a >= 20" << endl;
	}

	system("pause");
	return 0;
}
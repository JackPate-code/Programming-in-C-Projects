//ECE 2305 Tutorial 22

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a = 10;
	int* pa = &a;

	int b[4] = { 2, 6, 8, 17 };
	int* pb = b;

	int* pc = new int;
	*pc = 16;

	int* pd = new int[4];
	pd[0] = 5;
	pd[1] = 10;
	pd[2] = 15;
	pd[3] = 20;

	cout << "Memory Map" << endl;
	cout << "Name\tAddress\t\tData" << endl;
	cout << "a\t" << &a << "\t\t" << a << endl;
	cout << "pa\t" << pa << "\t\t" << *pa << endl;
	cout << "b[0]\t" << b << "\t\t" << *b << endl;
	cout << "b[1]\t" << b + 1 << "\t\t" << *(b + 1) << endl; //Data can also be b[#]
	cout << "b[2]\t" << b + 2 << "\t\t" << *(b + 2) << endl;
	cout << "b[3]\t" << b + 3 << "\t\t" << *(b + 3) << endl;
	cout << "pc\t" << pc << "\t\t" << *pc << endl;
	cout << "pd[0]\t" << pd << "\t\t" << *pd << endl; //Data can also be pd[0]
	cout << "pd[1]\t" << pd + 1 << "\t\t" << *(pd + 1) << endl;
	cout << "pd[2]\t" << pd + 2 << "\t\t" << *(pd + 2) << endl;
	cout << "pd[3]\t" << pd + 3 << "\t\t" << *(pd + 3) << endl;

	system("pause");
	return 0;
}
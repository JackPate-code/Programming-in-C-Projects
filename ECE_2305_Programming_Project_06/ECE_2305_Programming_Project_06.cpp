// ECE 2305 Programming Project 06

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

bool valid_dec(int N)
{
	bool valid = (N >= 0 && N <= 65535);
	return valid;
}

bool valid_hex(string s)
{
	bool valid = 0;
	int length = s.length();
	if (length == 4)
	{
		for (int n = 0; n < length; n++)
		{
			if ((s[n] >= 48 && s[n] <= 57) || (s[n] >= 65 && s[n] <= 70))
			{
				valid = 1;
			}
			else valid = 0;
		}
	}
	return valid;
}

string dec_to_hex(int d)
{
	string s = "    ";
	int Q, R;
	char letter;

	Q = d / 16;
	R = d % 16;
	if (R > 9)
	{
		s[3] = R + 55;
	}
	else
	{
		s[3] = R + 48;
	}
	R = Q % 16;
	if (R > 9)
	{
		s[2] = R + 55;
	}
	else
	{
		s[2] = R + 48;
	}
	Q = Q / 16;
	R = Q % 16;
	if (R > 9)
	{
		s[1] = R + 55;
	}
	else
	{
		s[1] = R + 48;
	}
	Q = Q / 16;
	R = Q % 16;
	if (R > 9)
	{
		s[0] = R + 55;
	}
	else
	{
		s[0] = R + 48;
	}
	Q = Q / 16;

	return s;
}

int hex_to_dec(string s)
{
	int dec = 0;
	for (int n = 0; n < 4; n++)
	{
		if ((int)s[n] >= 48 && (int)s[n] <= 57)
		{
			s[n] -= 48;
		}
		if ((int)s[n] >= 65 && (int)s[n] <= 70)
		{
			s[n] -= 55;
		}
		dec += (int)s[n] * pow(16, 3 - n);
	}
	return dec;
}

int main()
{
	int choice;
	do
	{
		cout << "Menu:" << endl;
		cout << "1. Enter Decimal Number." << endl;
		cout << "2. Enter Hexadecimal Number." << endl;
		cout << "3. End" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
		int dec;
		cout << "Enter a Decimal Number from 0 to 65535" << endl;
		cin >> dec;
		while (valid_dec(dec) != 1)
		{
			cout << "Please input a Decimal Number from 0 to 65535" << endl;
			cin >> dec;
		}
		cout << dec_to_hex(dec) << endl;
		break;
		}
		case 2:
		{
		string s = "";
		cout << "Enter a 4 digit Hexadecimal Number from 0 to 65535" << endl;
		cin >> s;
		while (valid_hex(s) != 1)
		{
			cout << "Please input a 4 digit Hexadecimal Number from 0 to 65535" << endl;
			cin >> s;
		}
		cout << hex_to_dec(s) << endl;
		break;
		}
		case 3:
			cout << "End" << endl;
		}
	} while (choice != 3);
	system("pause");
	return 0;
}
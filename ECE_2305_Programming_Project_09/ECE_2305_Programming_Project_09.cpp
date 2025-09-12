//ECE 2305 Programming Project 09

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void encodeFile(string s)
{
	string message;
	ifstream fin("c:" + s, ios::in);
	getline(fin, message);
	fin.close();

	int L = message.length();
	int offset = L % 25 + 1;
	int spacing = (L % 6) * 2 + 1;

	//Change all uppercase letters to lowercase letters
	for (int n = 0; n < L; n++)
	{
		if (65 <= message[n] && message[n] <= 90)
		{
			message[n] += 32;
		}
	}

	//Make code look up table with letter offset and spacing
	int code[26];
	for (int n = 0; n < 26; n++)
	{
		code[n] = (offset + spacing * n) % 26;
	}

	//Replace the each message letter with the corresponding coded letter from the look up table
	for (int n = 0; n < L; n++)
	{
		if (97 <= message[n] && message[n] <= 122)
		{
			message[n] = char(code[int(message[n]) - 97] + 97);
		}
	}

	ofstream fout("c:encoded.txt", ios::out);
	for (int n = 0; n < L; n++)
	{
		fout << message[n];
	}
	fout.close();
	cout << "Encoded file created!" << endl;
}

void decodeFile(string s)
{
	string message;
	ifstream fin("c:" + s, ios::in);
	getline(fin, message);
	fin.close();

	int L = message.length();
	int offset = L % 25 + 1;
	int spacing = (L % 6) * 2 + 1;

	//Change all uppercase letters to lowercase letters
	for (int n = 0; n < L; n++)
	{
		if (65 <= message[n] && message[n] <= 90)
		{
			message[n] += 32;
		}
	}

	//Make code look up table with letter offset and spacing
	int code[26];
	for (int n = 0; n < 26; n++)
	{
		code[n] = (offset + spacing * n) % 26;
	}

	//Find the letter that matches the coded letter in the table and replace it in the message
	for (int n = 0; n < L; n++)
	{
		if (97 <= message[n] && message[n] <= 122)
		{
			int m = 0;
			while (int(message[n]) - 97 != code[m])
			{
				m += 1;
			}
			message[n] = char(m + 97);
		}
	}

	ofstream fout("c:decoded.txt", ios::out);
	for (int n = 0; n < L; n++)
	{
		fout << message[n];
	}
	fout.close();
	cout << "Decoded file created!" << endl;
}

int main()
{
	int choice = 0;
	do
	{
		string s = "";
		cout << "Menu" << endl;
		cout << "1. Encode" << endl;
		cout << "2. Decode" << endl;
		cout << "3. End" << endl;
		cout << "Please make a choice." << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Please type the message text file you want encoded" << endl;
			cin >> s;
			encodeFile(s);
			break;
		case 2:
			cout << "Please type the coded message text file you want decoded" << endl;
			cin >> s;
			decodeFile(s);
			break;
		case 3:
			cout << "End" << endl;
			break;
		}
	} while (choice != 3);
	system("pause");
	return 0;
}
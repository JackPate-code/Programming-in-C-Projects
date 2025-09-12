//ECE 2305 Programming Project 07

#include <iostream>
#include <fstream>
using namespace std;

void sortedFile(double data[], int size)
{
	double temp = 0.0;
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size - 1; k++)
		{
			if (data[k] > data[k + 1])
			{
				temp = data[k];
				data[k] = data[k + 1];
				data[k + 1] = temp;
			}
		}
	}

	ofstream outFile("c:sortedData.txt", ios::out);
	for (int o = 0; o < size; o++)
	{
		outFile << data[o] << endl;
	}
	outFile.close();
}

void histogram(double data[], int size)
{
	int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (int o = 0; o < size; o++)
	{
		if (data[o] >= 0 && data[o] < 10)
		{
			count[0] += 1;
		}
		else if (data[o] >= 10 && data[o] < 20)
		{
			count[1] += 1;
		}
		else if (data[o] >= 20 && data[o] < 30)
		{
			count[2] += 1;
		}
		else if (data[o] >= 30 && data[o] < 40)
		{
			count[3] += 1;
		}
		else if (data[o] >= 40 && data[o] < 50)
		{
			count[4] += 1;
		}
		else if (data[o] >= 50 && data[o] < 60)
		{
			count[5] += 1;
		}
		else if (data[o] >= 60 && data[o] < 70)
		{
			count[6] += 1;
		}
		else if (data[o] >= 70 && data[o] < 80)
		{
			count[7] += 1;
		}
		else if (data[o] >= 80 && data[o] < 90)
		{
			count[8] += 1;
		}
		else if (data[o] >= 90 && data[o] < 100)
		{
			count[9] += 1;
		}
	}
	ofstream outFile("c:Histogram.txt", ios::out);
	outFile << "Bin\tNumber of Values" << endl;
	for (int l = 0; l < 10; l++)
	{
		outFile << l * 10 << "-" << l * 10 + 10 << "\t" << count[l] << endl;
	}
	outFile.close();
}

int main()
{
	ifstream inFile("c:numdata.txt", ios::in);
	double inValue;
	int size = 0;
	bool fail = 0;
	while (fail == 0)
	{
		inFile >> inValue;
		fail = inFile.fail();
		if (fail == 0)
		{
			size += 1;
		}
	}
	inFile.clear();
	inFile.seekg(0, ios::beg);

	double* data = new double[size];
	for (int n = 0; n < size; n++)
	{
		inFile >> data[n];
	}

	sortedFile(data, size);
	histogram(data, size);

	system("pause");
	inFile.close();
	return 0;
}
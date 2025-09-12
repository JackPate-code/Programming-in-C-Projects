// ECE 2305 Programming Project 05

#include<iostream>
#include<cmath>
using namespace std;

const int Size = 10;

void makeArray(double a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 100;
	}
}

void displayArray(double a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "The element " << i << " has value: " << a[i] << endl;
	}
}

void largestValue(double a[], int size)
{
	int largest = a[0];
	for (int i = 0; i < size; i++)
	{
		if (a[i] > largest)
		{
			largest = a[i];
		}
	}
	cout << "The largest value in the array is " << largest << endl;
}

void smallestValue(double a[], int size)
{
	int smallest = a[0];
	for (int i = 0; i < size; i++)
	{
		if (a[i] < smallest)
		{
			smallest = a[i];
		}
	}
	cout << "The smallest value in array is " << smallest << endl;
}

void descendingOrder(double a[], int size)
{
	double temp = 0.0;
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size - 1; k++)
		{
			if (a[k] < a[k + 1])
			{
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
}

void meanValue(double a[], int size)
{
	int mean = 0;
	for (int i = 0; i < size; i++)
	{
		mean += a[i];
	}
	mean = mean / size;
	cout << "The mean value of the array is " << mean << endl;
}

void medianValue(double a[], int size)
{
	int median = 0;
	if (size % 2 != 0)
	{
		median = a[size / 2];
	}
	else
	{
		median = (a[(size / 2) - 1] + a[size / 2]) / 2;
	}
	cout << "The median value of the array is " << median << endl;
}

void varianceValue(double a[], int size)
{
	int mean = 0;
	int variance = 0;
	for (int i = 0; i < size; i++)
	{
		mean += a[i];
	}
	mean /= size;
	for (int k = 0; k < size; k++)
	{
		variance += pow(a[k] - mean, 2);
	}
	variance /= size - 1;
	cout << "The variance of the array is " << variance << endl;
}

int main()
{
	int choice = 0;
	double a[Size];

	do
	{
		cout << "Menu:\n\n1. Create a new array with random elements." << endl;
		cout << "2. Display the elements of the array." << endl;
		cout << "3. Find and display the largest value in the array" << endl;
		cout << "4. Find and display the smallest value in the array" << endl;
		cout << "5. Sort the array in descending order and display the array." << endl;
		cout << "6. Find and display the mean value." << endl;
		cout << "7. Find and display the median value." << endl;
		cout << "8. Find and display the variance." << endl;
		cout << "9. End" << endl;
		cout << "\nPlease make a choice. ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
			makeArray(a, Size);
			break;
		case 2:
			displayArray(a, Size);
			break;
		case 3:
			largestValue(a, Size);
			break;
		case 4:
			smallestValue(a, Size);
			break;
		case 5:
			descendingOrder(a, Size);
			displayArray(a, Size);
			break;
		case 6:
			meanValue(a, Size);
			break;
		case 7:
			medianValue(a, Size);
			break;
		case 8:
			varianceValue(a, Size);
			break;
		case 9:
			cout << "End" << endl;
			break;
		}
	} while (choice != 9);

	system("pause");
	return 0;
}
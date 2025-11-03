// ECE 2305 Tutorial 20

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	double goldOld, goldOld2;
	int count1 = 0;
	int count2 = 0;
	double delta = 1.0, delta2 = 1.0, goldNew, goldNew2;

	cout << "Take a guess" << endl;
	cin >> goldOld;
	goldOld2 = goldOld;


	do
	{
		goldNew = sqrt(goldOld + 1);
		delta = goldNew - goldOld;
		delta = abs(delta);
		count1++;
		goldOld = goldNew;
	} while (delta > 0.000001);

	do
	{
		goldNew2 = 1 + (1 / goldOld2);
		delta2 = goldNew2 - goldOld2;
		delta2 = abs(delta2);
		count2++;
		goldOld2 = goldNew2;
	} while (delta2 > 0.000001);

	cout << "Number of iterations required for first formula: " << count1 << endl;
	cout << "Number of iterations required for second formula: " << count2 << endl;

	if (count1 < count2)
	{
		cout << "The first formula converges faster\n";
	}
	else
	{
		cout << "The second formula converges faster\n";
	}

	system("pause");
	return 0;
}
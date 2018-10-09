// Emily Gorman

#include <iostream>
using namespace std;

float floatfactorial(long n);
double doublefactorial(long n);
float floatf(float n);
double doublef(double n);
float floatfactorial(long n)
{
	float product = 1;
	if (n == 0)
	{
		product = 0;
		return product;
	}
	for (long i = 1; i <= n; i++)
	{
		product *= i;
		if (product == INFINITY)
		{
			cout << "Overflow detected at i = " << i << endl;
			break;
		}
	}
	return product;
}
double doublefactorial(long n)
{
	double product = 1;
	if (n == 0)
	{
		product = 0;
		return product;
	}
	for (long i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}
float floatf(float n)
{
	float sum = 0;
	for (float i = 1; i <= n; i++)
	{
		sum += (1 / i);
	}
	return sum - 1.0;
}
double doublef(double n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += (1 / i);
	}
	return sum - 1.0;
}

int main()
{

	short n, sum = 0;
	cout << "Please enter in an n: ";
	cin >> n;
	for (short i = 1; i <= n; i++)
	{
		sum += i;
		if (sum < 0)
		{
			cout << "Overflow detected at i = " << i << endl;
			break;
		}
	}
	cout << "n: " << n << " sum: " << sum << endl;

	long n2, sum2 = 0, n3;
	cout << "Please enter in an n again: ";
	cin >> n2;
	for (long i = 1; i <= n2; i++)
	{
		sum2 += i;
		if (sum2 < 0)
		{
			cout << "Overflow detected at i = " << i << endl;
			break;
		}
	}
	cout << "n: " << n2 << " sum: " << sum2 << endl;

	float n4, n5;
	double n6, n7;

	cout << "Please enter in an n again: ";
	cin >> n4;
	cout << "The product of n! is " << floatfactorial(n4) << endl;

	cout << "Please enter in an n again: ";
	cin >> n6;
	cout << "The product of n! is " << doublefactorial(n6) << endl;

	cout << "Please enter in an n again: ";
	cin >> n5;
	cout << "The ratio of 1/n (float) is equal to: " << floatf(n5) << endl;

	cout << "Please enter in an n again: ";
	cin >> n7;
	cout << "The ratio of 1/n (double) is equal to: " << doublef(n7) << endl;

	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	system("PAUSE");
	return(0);
}
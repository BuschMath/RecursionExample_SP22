#include <iostream>

using namespace std;

int Factorial(int n);

int main()
{
	cout << Factorial(5);

	return 0;
}

int Factorial(int n)
{
	if (n == 1)
		return 1;

	return n * Factorial(n - 1);
}
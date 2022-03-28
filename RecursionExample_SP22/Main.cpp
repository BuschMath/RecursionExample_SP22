#include <iostream>
#include <chrono>

using namespace std;

int Factorial(int n);
int fib(int n);

int main()
{
/*	int value = 50;
	for (int j = 0; j < 10; j++)
	{
		chrono::time_point<chrono::system_clock> start;
		chrono::time_point<chrono::system_clock> end;
		chrono::duration<float> elapsed;

		start = chrono::system_clock::now();
		Factorial(value);
		end = chrono::system_clock::now();
		elapsed = end - start;
		cout << "Recursion time: " << elapsed.count() << endl;

		int total = 1;

		start = chrono::system_clock::now();
		for (int i = 1; i <= value; i++)
			total *= i;
		end = chrono::system_clock::now();
		elapsed = end - start;
		cout << "Loop time: " << elapsed.count() << endl;
	}*/

	int index = 45;
	for (int j = 0; j < 1; j++)
	{
		chrono::time_point<chrono::system_clock> start;
		chrono::time_point<chrono::system_clock> end;
		chrono::duration<float> elapsed;

		start = chrono::system_clock::now();
		int rec = fib(index);
		end = chrono::system_clock::now();
		elapsed = end - start;
		cout << "Rec: " << rec << " ";
		cout << "Recursive time: " << elapsed.count() << endl;

		int a = 1, b = 1, value;

		start = chrono::system_clock::now();
		for (int i = 2; i <= index; i++)
		{
			value = a + b;
			a = b;
			b = value;
		}
		end = chrono::system_clock::now();
		elapsed = end - start;
		cout << "Loop: " << value << " ";
		cout << "Loop time: " << elapsed.count() << endl;
	}
}

int Factorial(int n)
{
	if (n == 1)
		return 1;

	return n * Factorial(n - 1);
}

int fib(int n)
{
	if (n == 0 || n == 1)
		return 1;

	cout << "Fib(" << n << ")";

	return fib(n - 1) + fib(n - 2);
}
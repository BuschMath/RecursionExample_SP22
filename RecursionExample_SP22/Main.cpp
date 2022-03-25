#include <iostream>
#include <chrono>

using namespace std;

int Factorial(int n);

int main()
{
	int value = 50;
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
	}
}

int Factorial(int n)
{
	if (n == 1)
		return 1;

	return n * Factorial(n - 1);
}
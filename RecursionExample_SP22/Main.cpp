#include <iostream>

using namespace std;

void Example();

int main()
{
	Example();

	return 0;
}

void Example()
{
	cout << "In function";

	Example();
}
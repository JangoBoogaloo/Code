#include <iostream>

using namespace std;

int compare(int a, int b)
{
	return a < b ? 1 : -1;
}

int compare(double a, double b)
{
	return a < b ? 1 : -1;
}

int main (void)
{
	cout << compare(1, 2) << endl;
	cout << compare(1.3, 2.3) << endl;
	cout << compare(1, 2.3) << endl;
	return 0;
}

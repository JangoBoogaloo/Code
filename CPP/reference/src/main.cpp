#include <iostream>

using namespace std;


void swap(int & num1, int & num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(void)
{

	int a=0;
	int b=3;
	swap(a,b);
	cout << a << endl;
	cout << b << endl;

	return 0;
}

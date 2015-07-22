#include <iostream>

using namespace std;

inline int compare(int a, int b)
{
	return a<b ? 1 : -1;
}
int main(void)
{

	cout << compare(0,1) << endl;
	return 0;
}

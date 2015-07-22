#include <iostream>

using namespace std;

struct A
{
	int b;
	int c;
};

int main(void)
{
	struct A *p;
	p = new A;
	delete p;

	struct A *p2;
	p2 = new A[3];
	delete [] p2;
	printf("End of Execution\n");
	return 0;
}

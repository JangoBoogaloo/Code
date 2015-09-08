#include <iostream>
#include "Passenger.h"

using namespace std;

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		cout << "Invalid argument" << endl;
		return -1;
	}

	cout << "Hello" << endl;
	return 0;
}

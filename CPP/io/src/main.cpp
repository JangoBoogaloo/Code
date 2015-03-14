#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
	string line;
	int ret = -1;
	int age=25;
	double height = 1.69;

	cout << "------------------------" << endl;
	cout << "INPUT\n";
	cout << "------------------------" << endl;
	cout << "Age: ";
	ret = getline(cin, line);
	stringstream(line) >> age;
	cout << "Height: ";
	ret = getline(cin, line);
	stringstream(line) >> height;
	cout << "------------------------" << endl;
	cout << "OUTPUT" << endl;
	cout << "------------------------" << endl;
	cout << "I am " << age << " years old" << endl;
	cout << "I am " << height << " meter tall" << endl;
	return 0;
}

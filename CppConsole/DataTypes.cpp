#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	bool boolean = false;
	char ch = '1';
	int numInt = 0;
	long numLong = 23;
	short numShort = 24;

	float numFloat = 32.0f;
	double numDouble = 32.11l;
	
	string str = "hello";

	char charArray[] = "hello";
	const char* c = "helloWorld";

	cout << "boolean: " << boolean << " -- " << sizeof(boolean) << endl;
	cout << "ch: " << ch << " -- "<< sizeof(ch) << endl;
	cout << "numInt " << numInt << " -- " << sizeof(numInt) << endl;
	cout << "numLong " << numLong << " -- " << sizeof(numLong) << endl;
	cout << "numShort " << numShort << " -- " << sizeof(numShort) << endl;
	cout << "numFloat " << numFloat << " -- " << sizeof(numFloat) << endl;
	cout << "numDouble " << numDouble << " -- " << sizeof(numDouble) << endl;
	cout << "str " << str << " -- " << (str).size() << endl;
	cout << "c " << c << " -- " << sizeof(c) << endl;
	cout << "charArray " << charArray << " -- " << sizeof(charArray) << endl;

	
	return 0;
}

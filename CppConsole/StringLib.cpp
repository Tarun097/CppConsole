#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char* argv[])
{
	//String library
	string str;
	getline(cin, str);
	cout << "String length : "<<str.length() <<endl;
	cout << "Sub string : " << str.substr(0, 4) << "\n";

	//math library
	int num;
	cout << "Enter a number";
	cin >> num;

	cout << "Square root of : " << sqrt(num) << endl;
	cout << "abs "<< abs(num) <<endl;
	cout << "fabs "<<fabs(num) << endl;
	
	return 0;
}

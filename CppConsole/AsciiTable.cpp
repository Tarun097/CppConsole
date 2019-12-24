#include <iostream>
using namespace std;

void toUpper(char);
void toLower(char);

int main(int argc, char* argv[])
{

	//Print ascii table
	
	/*char temp;
	for (int i = 0 ; i<128; i++)
	{
		temp = i;
		cout << i << " -- " << temp << endl;
	}*/

	cout << "Convert to upper" << endl;
	toUpper('a');

	cout << "Convert to lower" << endl;
	toLower('C');
	
	return 0;
}

void toLower(char c)
{
	char temp = c + 'a' - 'A';
	cout << temp << endl;
};

void toUpper(char c)
{
	char temp = c + 'A' - 'a';
	cout << temp << endl;
}
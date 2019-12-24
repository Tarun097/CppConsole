#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int int_num = 10;
	int double_num = 10.75;

	int result = int_num + (int)double_num; // C-style cast
	//int result = int_num + static_cast<int>(double_num);
	
	cout << result;
	
	
	return 0;
}

#include <iostream>

void swapNumbers(int& num1, int& num2);

int main(int argc, char* argv[])
{

	int num1{ 10 };
	int num2{ 20 };
	std::cout << "num1 : " << num1 << " num2:" << num2 <<std::endl;
	swapNumbers(num1, num2);
	std::cout << "num1 : " << num1 << " num2:" << num2 << std::endl;

	return 0;
}

//Here &num1 and &num2 are alias to actual arguments in function call
void swapNumbers(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

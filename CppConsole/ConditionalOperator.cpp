#include <iostream>

int main(int argc, char* argv[])
{

	int num1{}, num2{};
	std::cout << "Enter two numbers : ";
	std::cin >> num1 >> num2;

	std::cout << "Greatest of two is " << (num1 > num2 ? num1 : num2) <<std::endl;
	
}

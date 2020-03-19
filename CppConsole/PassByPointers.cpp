#include <iostream>

#define LOG(x) std::cout<<x<<std::endl;


void doubleThis(int* int_ptr);

int main(int argc, char* argv[])
{
	int value{ 10 };
	LOG(value);

	doubleThis(&value); //Can pass address
	LOG(value);

	int* int_ptr = &value;
	doubleThis(int_ptr); //Can pass pointer itself (as value of pointer is address)

	LOG(*int_ptr);

	return 0;
}

void doubleThis(int* int_ptr)
{
	*int_ptr *= 2;
}

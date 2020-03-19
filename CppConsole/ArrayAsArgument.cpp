#include<iostream>

//When arrays are passed as argument, only its address is copied to the function (So it is still pass by value, but only address is copied)
//So we can modify array passed to function
//This can be avoided using "const" keyword in function prototype

void printArray(const std::string names[], size_t size);

int main(int argc, char* argv[])
{
	std::string names[] { "tom", "cat","jerry", "mouse", "Tom & Jerry" };


	size_t size{ 5 };
	printArray(names, size);

	return 0;
}

void printArray(const std::string names[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << names[i] << "\n";
	}
}
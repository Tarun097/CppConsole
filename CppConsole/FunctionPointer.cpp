#include <iostream>
#include <vector>

typedef void(*HelloWorldFunction)();

void Print()
{
	std::cout << "Printing .... " << std::endl;
}


void ForEach(std::vector<int> numbers, void(*func)(int))
{
	for (int num : numbers)
	{
		func(num);
	}
}

int main(int argc, char* argv[])
{
	HelloWorldFunction printHelloWorld = []() { std::cout << "Hello World" << std::endl; };

	printHelloWorld();
	printHelloWorld();


	auto printFunc = Print;

	printFunc();
	printFunc();


	std::vector<int> numbers = { 1,2,3,4,5 };

	ForEach(numbers, [](int num) {std::cout << num << std::endl; });
	
	return 0;
}
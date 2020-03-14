#include <iostream>

enum class Value { one, two, three, four, five };	// enum class

int main()
{
	Value val {Value::three};

	//condition for switch has to be integer values
	//So we can also use characters, enum
	
	switch (val)
	{
	case Value::one:
		std::cout << "One" << std::endl;
		break;
	case Value::two:
		std::cout << "Two" << std::endl;
		break;
	case Value::three:
		std::cout << "Three" << std::endl;
		break;
	case Value::four:
		std::cout << "Four" << std::endl;
		break;
	case Value::five:
		std::cout << "Five" << std::endl; 
		break;

	default:
		std::cout << "Some other integer" << std::endl;
	}
	
}

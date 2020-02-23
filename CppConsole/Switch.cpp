#include <iostream>

enum value { one, two, three, four, five };

int main()
{
	value val {three};

	//condition for switch has to be integer values
	//So we can also use characters, enum
	
	switch (val)
	{
	case one:
		std::cout << "One" << std::endl;
		break;
	case two:
		std::cout << "Two" << std::endl;
		break;
	case three:
		std::cout << "Three" << std::endl;
		break;
	case four:
		std::cout << "Four" << std::endl;
		break;
	case five:
		std::cout << "Five" << std::endl;
		break;

	default:
		std::cout << "Some other integer" << std::endl;
	}
	
}

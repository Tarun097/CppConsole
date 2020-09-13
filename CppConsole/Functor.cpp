#include <iostream>

/*
 * A function object, or functor, is any type that implements operator().
 * This operator is referred to as the call operator or sometimes the application operator.
 * The C++ Standard Library uses function objects primarily as sorting criteria for containers and in algorithms.
 */

class Functor
{
public:
	
	bool operator()(int a, int b) const
	{
		return a > b;
	}
};

int main(int argc, char* argv[])
{
	Functor f;
	std::cout << std::boolalpha;

	std::cout << f(4, 5);
	
}
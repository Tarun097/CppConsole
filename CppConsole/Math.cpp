#include <iostream>
#include <cmath>


#define LOG(x) std::cout << x <<std::endl;

int main(int argc, char* argv[])
{

	LOG(sqrt(400));
	LOG(cbrt(27)); //Cube root

	LOG(ceil(34.6));
	LOG(floor(34.6));
	
	LOG(sin(0));
	LOG(cos(1));

	LOG(pow(4, 3)); //4^3

	return 0;
}
#include <iostream>
#include <cstdlib>  //required for rand()
#include <ctime>	//required for time()
#include <iomanip>


//rand() retruns a random number between 0 and RAND_MAX

int main(int argc, char* argv[])
{
	std::cout <<"RAND_MAX : " << RAND_MAX << std::endl;

	//srand(time(nullptr));  //nullptr is 0
	srand(time(0)); //Seed the random number generator, else it returns same sequence of random numbers every time

	for (int i=0;i<10;i++)
	{
		auto die1 = rand() % 6 + 1; // to get numbers between 6 and 1
		auto die2 = rand() % 6 + 1;
		
		std::cout <<std::setw(6)<< die1 <<std::setw(6)<< die2 << std::endl;
	}

	return 0;
}

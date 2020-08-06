#include<iostream>
#include<thread>
#include<chrono>
#include <ctime>
#include <ratio>

typedef unsigned long long ull;

void findEvenSum(ull start, ull stop)
{
	ull result{};

	for (auto i = start; i <= stop; i++)
	{
		if((i&1)==0)
		{
			result = result + i;
		}
	}

	std::cout << "Even Sum : " << result ;
}

void findOddSum(ull start, ull stop)
{
	ull result{};

	for (auto i = start; i <= stop; i++)
	{
		if ((i & 1) == 1)
		{
			result = result + i;
		}
	}

	std::cout << "Odd Sum : " << result;
}

int main(int argc, char* argv[])
{

	auto start = std::chrono::high_resolution_clock::now();

	std::thread t1(findEvenSum, 0, 1000000);
	std::thread t2(findOddSum, 0, 1000000);

	t1.join();
	t2.join();

	auto stop = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(stop - start);
	std::cout << time_span.count() << std::endl;

	return 0;
}
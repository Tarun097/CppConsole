#include <iostream>

#define LOG(x) std::cout << x <<std::endl;

//Recursion should have a base case where it ends
//Few problems can be easily solved in easy to understand recursive code, iteration is complex in these cases
//Recursion eats up call stack - So try to avoid

int factorial(int num)
{
	if(num==0)
	{
		return 1;
	}

	return num* factorial(num - 1);
}

int fibOf(int x)
{
	if ((x == 1) || (x == 0)) 
	{
		return(x);
	}
	else {
		return(fibOf(x - 1) + fibOf(x - 2));
	}
}

void fibonacciUsingRecursion(int num)
{
	int i{ 0 };

	while(i < num)
	{
		std::cout << fibOf(i) << " ";
		i++;
	}
}

void fibonacciUsingIteration(int num)
{
	if(num <=0)
	{
		return;
	}

	int first  {0};
	int second {1};

	if (num == 1)
	{
		LOG(first);
	}
	else if(num == 2)
	{
		LOG(first);
		LOG(second);
	}
	else if (num > 2) {

		LOG(first);
		LOG(second);

		int count = 3;

		while (count <= num)
		{
			auto temp = second;
			second = second + first;
			first = temp;

			LOG(second);
			count++;
		}
	}

}

int main(int argc, char* argv[])
{
	//LOG(factorial(4));
	//fibonacciUsingIteration(7);
	fibonacciUsingRecursion(7);
	return 0;
}
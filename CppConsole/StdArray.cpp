#include <iostream>
#include <array>

#define log(x,y) std::cout << x << y << std::endl;

template<class T, size_t N>
void print(std::array<T,N>& arr)
{
	std::cout << "printing array .. " << std::endl << std::endl;
	for (auto num : arr)
	{
		std::cout << num << std::endl;
	}
}


int main()
{
	//std::array is created on stack
	//Note: vector is created on heap


	std::array<int, 5> numbers{ 1,2,3,4,5 };

	log("size of array is  ", numbers.size());

	std::cout << numbers.at(0) << std::endl;
	std::cout << numbers[1] << std::endl;

	//std::cout << numbers[6] << std::endl; //doesn't throw exception, std::array.at() does

	print(numbers);

	return 0;
}
#include<iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	double nums[]{ 10,20,30.2435,40.2 };
	double sum{};

	
	for(auto num : nums)
	{
		sum += num;
	}

	std::cout << std::fixed << std::setprecision(2); //two decimal places
	std::cout << "Avg is :" << sum / 5;
	

	//for(int num : {10,20,30,40}) //using initializer list as collection
	//{
	//	std::cout << num << " ";
	//}

	//for(auto character : "CharacterString")
	//{
	//	std::cout << character << std::endl;
	//}

	
	return 0;
}
#include<iostream>

int main(int argc, char* argv[])
{
	/*int nums[]{ 10,20,30,40 };

	for(int num : nums)
	{
		std::cout << num << " ";
	}

	*/

	//for(int num : {10,20,30,40}) //using initializer list as collection
	//{
	//	std::cout << num << " ";
	//}

	for(auto character : "CharacterString")
	{
		std::cout << character << std::endl;
	}
	
	return 0;
}
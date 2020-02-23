#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
	//Can use list like initialization instead of assignment
	//can initialize more than one variable using comma
	/*for (int i {1}, j {10} ; i <= 10 && j>=0 ; ++i, j-=2)
	{
		std::cout << "i :" << i << std::endl;
		std::cout << "j :" << j << std::endl;
	}*/


	//print 1 to 100
	/*for(int i=1; i<=100; i++)
	{
		std::cout << i << ((i % 10 == 0) ? "\n" : " ");
	}*/

	std::vector<int> nums{ 10, 20, 30,40 };
	
	for(unsigned i{0}; i<nums.size();i++)
	{
		std::cout << nums[i] <<" ";
	}
	
	//Since loop expressions are optional, you can have infinite loop as shown below
	/*for (;;)
		std::cout << "Endless loop";*/
}
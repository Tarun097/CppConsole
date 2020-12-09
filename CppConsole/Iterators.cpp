#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	//Always use auto for type here
	std::vector<int>::iterator begin = vec.begin();
	std::vector<int>::iterator end = vec.end();

	for(std::vector<int>::iterator itr = begin; itr!=end; itr++)
	{
		std::cout << *itr << " ";
	}
}

#include <iostream>
#include <algorithm>
#include <vector>

/*
 *Variations on Finding
 *	find_if_not   -- opposite of find_if
 *	find_first_of  -- let's you pass in sequence of elements to be searched And returns pos of which ever is found first
 *	search  -- it looks for sequence - say a word in sentence and will return iterator of first char from match
 *	find_end -- exactly like search, but gives last occurrence of subsequence 
 *	search_n -- search find consecutive instances, like 4 zeros in row
 *	adjacent_find -- finds any two consecutive elements which have same value
*/

int main(int argc, char* argv[])
{
	std::vector<int> vec{ 1,2,3,4,4,5,6,7,8,8,9,9 };
	std::string message{ "I am string message" };
	
	auto pos = std::find(std::begin(vec), std::end(vec), 2);
	std::cout << *pos << "\n";
	
	auto pos1 = std::find(++pos, std::end(vec), 2);
	if(pos1!=vec.end())
	{
		std::cout << *pos1 << "\n";
	}

	//returns iterator pointing to first element satisfying the condition
	auto pos2 = std::find_if(std::begin(vec), std::end(vec), [](auto num) {return num % 2 == 0; });
	std::cout << *pos2 << "\n";

	//gives pos of adjacent elements
	auto pos3 = std::adjacent_find(std::begin(vec), std::end(vec));
	std::cout << *pos3 << " " << *(++pos3) << "\n";

	//find_first_of
	std::vector<int> toSearch{ 4,2 };
	auto pos4 = std::find_first_of(std::begin(vec), std::end(vec), toSearch.begin(), toSearch.end());
	std::cout << *pos4 << "\n";
	
	std::cin.get();
}

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <map>


void printMessage(const std::string& message)
{
	std::cout << message << std::endl;
}

int main()
{
	printMessage("Populating vector");

	std::vector<int> myVec;
	int i{ 0 };
	std::generate_n(std::back_inserter(myVec), 5, [&]() { return ++i; });

	for (auto element : myVec)
	{
		std::cout << element << std::endl;
	}

	printMessage("Populating list");
	
	std::list<int> myList;
	int j{ 0 };
	std::generate_n(std::back_inserter(myList), 5, [&]() { return ++j; });

	for (auto element : myList)
	{
		std::cout << element << std::endl;
	}


	//Adding all elements in vector
	auto total = std::accumulate(myVec.begin(), myVec.end(), 0); //initial total value

	std::cout << "Total sum of items in vec : " << total << "\n";

	printMessage("new vector");
	//Counting the occurrence of a number in vector
	std::vector<int> vec1{ 1,2,1,1,4,5 };
	for (auto element : vec1)
	{
		std::cout << element << std::endl;
	}
	auto oneCount = std::count(vec1.begin(), vec1.end(), 1); //count 1
	auto oddCount = std::count_if(std::begin(vec1), std::end(vec1), [](auto num) {return num % 2 != 0; });

	auto allOffAreOdd = std::all_of(std::begin(vec1), std::end(vec1), [](auto num) { return num % 2 != 0; });
	auto anyOffAreOdd = std::any_of(std::begin(vec1), std::end(vec1), [](auto num) { return num % 2 != 0; });
	auto noneOffAreOdd = std::none_of(std::begin(vec1), std::end(vec1), [](auto num) { return num % 2 != 0; });

	std::map<int, int> months = { {1,31},{2,28}, {3,31}, {4,30},{5,31},{6,30},{7,31},{8,31}, {9,30},{10,31},{11,30}, {12,31}};
	auto longMonths = std::count_if(std::begin(months), std::end(months), [](auto month) {return month.second > 30; });

	//Iterator invalidation : can happen when you use iterator to erase an collection element and continue in the looping the collection using iterator increment

	printMessage("Removing all 1s");
	auto vec2 = vec1;
	auto newEndOfVector = std::remove_if(vec2.begin(), vec2.end(), [](int num) { return num == 1; });
	vec2.erase(newEndOfVector, vec2.end());

	//Usually done all in one line
	//vec2.erase(std::remove_if(vec2.begin(), vec2.end(), [](int num) { return num == 1; }), vec2.end());
	
	for (auto element : vec2)
	{
		std::cout << element << std::endl;
	}

	printMessage("one more new vector");
	std::vector<int> vec3{ 1,2,41,10,-4,5 };
	for (auto element : vec3)
	{
		std::cout << element << std::endl;
	}

	std::sort(vec3.begin(), vec3.end());
	printMessage("After sorting");
	for (auto element : vec3)
	{
		std::cout << element << std::endl;
	}

	auto allPositives = std::all_of(vec3.begin(), vec3.end(), [](int num) { return num >= 0; });
	std::cout << "Are all numbers in vec3 positives : " << std::boolalpha <<allPositives << std::endl;

	printMessage("find element in 'o' Hello World");
	std::string message{ "Hello World" };
	auto pos = std::find(message.begin(), message.end(), 'o');
	
	auto capsLettersCount = std::count_if(message.begin(), message.end(), [](char c) {return c!=' ' && toupper(c) == c; });
	
}


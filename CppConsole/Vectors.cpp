#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers;
	int size;
	int input_num;

	cout << "Size :";
	cin >> size;
	
	for (int i = 0; i < size; i++)
	{
		cin >> input_num;
		numbers.push_back(input_num);
	}

	cout << "Output";

	for (auto i = numbers.begin(); i != numbers.end() ; ++i)
	{
		cout << *i << endl;;
	}

	return 0;
}
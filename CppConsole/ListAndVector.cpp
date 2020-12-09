#include <list>
#include <vector>
#include <chrono>
#include <iostream>

template <typename Func>
long long TimeFunc(Func f)
{
	const auto begin = std::chrono::steady_clock::now();
	f();
	const auto end = std::chrono::steady_clock::now();

	return std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
}

void BuildVector(const int& size, std::vector<int>& v)
{
	for(int i=0; i<size; i++)
	{
		int randomNum = static_cast<int>(std::rand());
		bool inserted = false;
		for(auto it = v.begin(); it!=v.end(); ++it)
		{
			if(*it> randomNum)
			{
				v.insert(it, randomNum);
				inserted = true;
				break;
			}
		}

		if(!inserted)
		{
			v.push_back(randomNum);
		}
	}
}

void BuildList(const int& size, std::list<int>& l)
{
	for (int i = 0; i < size; i++)
	{
		int randomNum = static_cast<int>(std::rand());
		bool inserted = false;
		for (auto it = l.begin(); it != l.end(); ++it)
		{
			if (*it > randomNum)
			{
				l.insert(it, randomNum);
				inserted = true;
				break;
			}
		}

		if (!inserted)
		{
			l.push_back(randomNum);
		}
	}
}

int main()
{
	int const size = 10'000;
	std::vector<int> v;

	std::list<int> l;

	auto vectorMilliseconds = TimeFunc([&]() {BuildVector(size, v); });
	auto listMilliseconds = TimeFunc([&]() {BuildList(size, l); });

	std::cin.get();
}
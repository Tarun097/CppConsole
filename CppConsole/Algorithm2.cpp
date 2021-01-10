//Sorting

#include <iostream>
#include <vector>
#include <algorithm>

class Employee
{
public:
	Employee(const std::string& firstName, const std::string& lastName, int salary): firstname(firstName), lastname(lastName), _salary(salary) {  }
	int getSalary() { return _salary; }
	std::string getName() { return firstname + " " + lastname; }
	
private:
	std::string firstname;
	std::string lastname;
	int _salary;
};

int main(int argc, char* argv[])
{
	std::vector<int> vec{ -1,0,95,-45,3,10,7 };
	auto vec1 = vec;
	
	std::sort(std::begin(vec1), std::end(vec1)); // "<" - less than default

	std::sort(std::begin(vec1), std::end(vec1),   //Decreasing order " > "
		[](auto num1, auto num2) { return num1 > num2; });

	std::sort(std::begin(vec1), std::end(vec1),
		[](auto num1, auto num2) { return abs(num1) > abs(num2); }); //Decreasing absolute value


	//std::stable_sort();  -- This maintains the items position after sort with identical values
	//First sort by name, then sort by salary --- Final collection will be sorted by salary but people with same salary will be sorted by name
	std::vector<Employee> staff {
		{"Tarun", "kumar", 1000},
		{"Arun", "kumar", 2000},
		{"Varun", "kumar", 1000},
	};

	std::sort(std::begin(staff), std::end(staff),
		[](Employee name1, Employee name2)
	{
		return name1.getName() < name2.getName();
	});

	std::stable_sort(std::begin(staff), std::end(staff),
		[](Employee name1, Employee name2)
	{
		return name1.getSalary() < name2.getSalary();
	});


	//is_sorted(it1,it2)
	//is_sorted(it1,it2,lambda)

	auto maxElement = *(std::max_element(std::begin(vec1), std::end(vec1))); // Works for both sorted and unsorted
	auto minElement = *(std::min_element(std::begin(vec1), std::end(vec1)));

	//If collection is sorted, you can just take beginning or end. For ex let's say collection(vec) is sorted in increasing order
	//auto minElement = *std::begin(vec)
	//auto maxElement = *(std::end(vec)-1)

	//upper_bound and lower_bound can only be used on sorted collections

	//Given a sorted collection, upper_bound and lower_bound are more efficient than find
	
	std::cin.get();
}

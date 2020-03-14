#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	std::string s1{ "abc" };
	std::string  str(10, 'x'); //xxxxxxxxxx
	std::string str1(s1, 1, 2); //bc
	std::string str2(s1); //copy s1
	std::string str4;

	std::cout << "str: " << str << std::endl;
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	std::cout << "str4: " << str4 << "\nstr4 length : "<< str4.length() << std::endl;

	std::cout << "------------------------" << std::endl;


	for(int i : s1)
	{
		std::cout << i << std::endl;
	}

	std::string s2{ "This is a test" };
	std::cout << s2.substr(0, 4) <<std::endl;
	std::cout << s2.substr(5, 2) << std::endl; //is
	std::cout << s2.substr(5) << std::endl;

	//std::cout << "Enter text input \n";
	//std::string s3{};
	//getline(std::cin, s3);
	//std::cout << s3;

	//std::cout << "\nEnter another input with '*' in between\n";
	//std::string s4{};
	//getline(std::cin, s4, '*');
	//std::cout << s4;


	std::string s5{ "test1 test2" };
	size_t pos{};
	if ((pos = s5.find("test")) == std::string::npos)
	{
		std::cout << "no match";
	}
	else
	{
		std::cout << "found at position :" << pos << std::endl;
		std::cout << s5.find("test", pos + 1); //find next "test" in s5
	}

	return 0;
}
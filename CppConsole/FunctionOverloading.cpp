#include <iostream>

#define LOG(x) std::cout << x << std::endl;

//Functions with same name but different parameter list
//These parameters can differ in number or type

/*

//function overloading cannot be done w.r.t return type

int printNum();
double printNum();

std::cout << printNum();   //What function to call ?

*/

void print(int);
void print(double);
void print(std::string);
void print(std::string, std::string);


int main(int argc, char* argv[])
{

	print(10);
	print(12.1);
	print(10.4F); //Float type cast to double
	print("hello"); //C-Style string type cast to std::string
	print(std::string("Hey"));
	print("hello", std::string("hey"));

	return 0;
}

void print(int num)
{
	LOG("Printing integer : ");
	LOG(num);
}

void print(double num)
{
	LOG("Printing double : ");
	LOG(num);
}

void print(std::string str)
{
	LOG("Printing string : ");
	LOG(str);
}

void print(std::string str1, std::string str2)
{
	LOG("Printing strings : ");
	LOG(str1);
	LOG(str2);
}


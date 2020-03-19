#include <iostream>
#include <cstring>

int main(int argc, char* argv[])
{
	//C-Style strings are NULL terminated string

	char myString[8]{ "hello" }; //['h','e','l','l','o', '\0', '\0', '\0']

	int i{ 0 };
	while(myString[i] != '\0')
	{
		std::cout << myString[i];
		i++;
	}
	std::cout << std::endl;

	char oneMoreCharArray[] = "This way also you can initialize string, and it's null terminated";
	std::cout << oneMoreCharArray << std::endl;


	char myOtherString[] = { 'a','b', 'c', 'd' }; //This is not null terminated automatically
	std::cout << "myOtherString : " << myOtherString << std::endl; //This will give abcd + values till it find some null character

	//Pointer to string literal , cannot be changed as literals are in readonly section of CS so const have to be used
	const char* tempString = "Hello"; //here const means you can change data pointed by tempString pointer i.e "Hello"
	std::cout << "tempString : " << tempString << "\ntempString length: " << strlen(tempString) << std::endl;

	/*----------------------------------------------------------------------------------------------*/

	std::cout << "--------------------------------------------------------------------" << std::endl;

	char myAnotherString[1024]{};
	//myAnotherString = "Temp"; //invalid

	std::cout << strlen(myAnotherString) << std::endl;

	strcpy(myAnotherString, "Temp");
	std::cout << strlen(myAnotherString) << std::endl;


	strcat(myAnotherString, " Hello how are you?"); //
	std::cout << strlen(myAnotherString) << std::endl;


	std::cout << myAnotherString << std::endl;

	std::cout << strlen(myAnotherString) << std::endl;



	char firstString[10], secondString[10];
	strcpy(firstString, "first");
	strcpy(secondString, "second");

	if(strcmp(firstString, secondString) == 0 ) //returns 0 if strings are equal
	{
		std::cout << "They are same\n";
	}
	else
	{
		std::cout << "Different\n";
	}

	char dest[12]{ "hello" };  
	char src[]{ " world" };
	strcat(dest, src); //dest character array should have enough space for the string getting appended + '\0' character
	std::cout << "Concatenated string : "<< dest << std::endl;

	//Find and replace

	char one_more_str[] = "This is a very long string";
	char search_text[] = "very";

	auto position = strstr(one_more_str, search_text); //returns pointer to position where this search is found
	if(position != nullptr)
	{
		auto newPosition = strncpy(position, "temp", 4); // returns a pointer to dest string
		std::cout << newPosition << std::endl;
	}


	std::cout << one_more_str << std::endl;
	return 0;
}
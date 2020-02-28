#include<iostream>

int main(int argc, char* argv[])
{
	////Read a character from user
	//char c {};
	//std::cout << "Enter a character" << std::endl;
	//std::cin.get(c);
	//std::cout << "You entered " << c << std::endl;


	//Read character array from user
	char buffer[10];
	std::cout << "Enter string :" << std::endl;
	std::cin.get(buffer, 10, '*'); //Reads length-1 characters including whitespace, till [delimiter - default is '\n'] is encountered  
	//std::cin >> buffer;  //extraction operator (>>) terminates when whitespace is found.
	std::cout << buffer;
	
	
	return 0;
	
}

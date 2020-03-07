#include<iostream>

int main(int argc, char* argv[])
{
	////Read a character from user
	//char c {};
	//std::cout << "Enter a character" << std::endl;
	//std::cin.get(c);
	//std::cout << "You entered " << c << std::endl;


	////Read character array from user
	//char buffer[10];
	//std::cout << "Enter string :" << std::endl;
	////Reads length-1 (as last character will be NULL '\0' character) characters including whitespace, till [delimiter - default is '\n'] is encountered  
	//std::cin.get(buffer, 10, '*'); 
	////std::cin >> buffer;  //extraction operator (>>) terminates when whitespace is found.
	//std::cout << buffer;

	////cin.get() returns an int
	//auto c = std::cin.get();
	//std::cout << "char is returned as int : " << c << " can be cast to char : " << static_cast<char>(c) << std::endl;
	//int return_val;
	//while( (return_val = std::cin.get()) != 'q')  //This version used for comparison with EOF (-1) in file operations
	//{
	//	std::cout << char(return_val);
	//}

	//Read line from console
	char buffer[10];
	std::cin.getline(buffer, 10, '\n');
	std::cout << buffer;
	return 0;
	
}

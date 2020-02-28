#include<iostream>

int main(int argc, char* argv[])
{
	int num{};

	//
	//bool done{ false };
	//while(!done) //pre-test loop
	//{
	//	std::cout << "Enter a number between 1 and 10 :";
	//	std::cin >> num;
	//	if(num>=1 && num<=10)
	//	{
	//		std::cout << "Done";
	//		done = true;
	//	}
	//}


	//POST-TEST Loop
	do
	{ 
		std::cout << "Enter a number between 1 and 10 : ";
		std::cin >> num;
	} while (num < 1 || num > 10);

	std::cout << "Done";
	
	return 0;
}
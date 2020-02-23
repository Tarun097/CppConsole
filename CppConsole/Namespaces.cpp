#include <iostream>

using std::cout;

namespace FunctionNamespace
{
	void Display()
	{
		cout << "This is function from different namespace" <<std::endl;
	}
}

int main(int argc, char* argv[])
{
	cout << argc << " Number of arguments supplied" << std::endl;
	
	if(argv != nullptr)
	{
		for(int i=0; i<argc; i++)
		{
			cout << argv[i] << std::endl;
		}
	}
	else
	{
		cout << "argv is nullptr";
	}
	
	
	cout << "This is how we use selected function from namespace" <<std::endl;
	FunctionNamespace::Display();
	return 0;
}

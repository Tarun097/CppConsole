#include<iostream>

template<typename T>
void print(T value)
{
	std::cout << value << std::endl;
}


template<class T> // class can also be used in place of typename
void printMessage(T value)
{
	std::cout << value << std::endl;
}

template<typename T, int N>
class Array
{
private:
	T array[N]; //Here we are initializing size at compile time
public:
	int getSize() { return N; }
};

int main(int argc, char* argv[])
{
	print(5); //type is inferred implicitly
	print("Hello"); //type is inferred implicitly
	print<std::string>("Hello Again");

	printMessage<int>(55);

	Array<int, 5> a{};
	std::cout << a.getSize();
	
	return 0;
}
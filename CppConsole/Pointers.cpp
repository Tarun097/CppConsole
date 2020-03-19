#include <iostream>

int main(int argc, char* argv[])
{
	int* num_ptr{ nullptr }; //Always initialize pointer to nullptr is not defined yet

	int num{ 0 };
	std::cout << "num : " << num << std::endl;
	std::cout << "sizeof num : " << sizeof num << std::endl;
	std::cout << "address of num : " << &num << std::endl;

	//Now num_ptr points to num i.e num_ptr stores the address of num
	num_ptr = &num;

	//change value of num using num_ptr
	*num_ptr = 4;

	std::cout << "size of num_ptr : " << sizeof num_ptr << std::endl; //4 bytes are required to store address on this machine
	std::cout << "value of num_ptr : " << num_ptr << std::endl; //num_ptr stores address of num
	std::cout << "Dereferencing num_ptr : " << *num_ptr << std::endl;
	std::cout << "num: " << num << std::endl;


	int* int_ptr{ nullptr };
	char* char_ptr{ nullptr };
	double* double_ptr{ nullptr };
	std::string* str_ptr{ nullptr };

	//All pointers of different types needs 4 bytes(on this machine) to store address of respective types
	std::cout << "size of int_ptr : " << sizeof int_ptr << std::endl;
	std::cout << "size of char_ptr : "  << sizeof char_ptr << std::endl;
	std::cout << "size of double_ptr : " << sizeof double_ptr << std::endl;
	std::cout << "size of str_ptr : " << sizeof str_ptr << std::endl;


	double temp{ 104.5 };
	double* temp_ptr{ &temp };

	std::cout << "temp value : " << *temp_ptr << std::endl;

	std::string name{ "Tarun" };
	std::string* name_ptr{ &name };

	std::cout << sizeof name << std::endl;
	std::cout << name[0] << std::endl;

	std::cout << (*name_ptr)[0] << std::endl;

	return 0;
}
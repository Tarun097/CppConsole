#include <iostream>

int main(int argc, char* argv[])
{
	int* int_ptr{ nullptr };

	int_ptr = new int(1); //storage on heap

	std::cout << *int_ptr << std::endl;
	
	*int_ptr = 10;

	std::cout << *int_ptr << std::endl;

	delete int_ptr;

	std::cout << "-----------------------------------" << std::endl;

	size_t size{};
	std::cout << "Enter size of Array :" << std::endl;
	std::cin >> size;

	int* array = new int[size]; //pointer to array

	for (size_t i = 0; i < size; i++)
	{
		array[i] = i;
	}

	//array is the starting address of first element
	//array+0 is also address of first element, so de-reference it to get first element *(array+0)
	//array+1 is address of second element

	std::cout << "first element is :" << *(array) << std::endl;
	std::cout << "third element is :" << *(array + 2) << std::endl;


	//print whole array
	for (size_t i = 0; i < size; i++)
	{
		std::cout << *(array+i) << " ";
	}
	std::cout << std::endl;

	delete[] array;

	std::cout << "-----------------------------------" << std::endl;

	//Pointers can be used to represent arrays as shown in above example
	//Let's see one more example

	int num_array[]{ 1,2,3,4,5 };
	int* num_array_ptr{ num_array };

	//Now pointer can be used like an array 
	std::cout << "Pointer subscript notation" << std::endl;
	std::cout << num_array_ptr[0] << std::endl;   // *num_array_ptr == num_array_ptr[0]
	std::cout << num_array_ptr[1] << std::endl;   // *(num_array_ptr+1) == num_array_ptr[1]

	std::cout << "Pointer offset notation" << std::endl;
	std::cout << *num_array_ptr << std::endl;
	std::cout << *(num_array_ptr+1) << std::endl;

	//Arrays can also be used like pointer, herer num_array is pointer to first element to array
	std::cout << "Array offset notation" << std::endl;
	std::cout << *num_array << std::endl;
	std::cout << *(num_array + 1) << std::endl;

	std::cout << "Array subscript notation" << std::endl;
	std::cout << num_array[0] << std::endl;
	std::cout << num_array[1] << std::endl;


	const char * str = "This is a string of characters"; //This is NULL terminated CStyle string
	while (*str != '\0')
	{
		//* and ++ have same precedence; 
		//but associativity is right to left so pointer is incremented not the value it points to
		//(*str)++ is different , it means increment the value str points, not the pointer
		
		std::cout << *str++; 
	}

	std::cout << std::endl;

	return 0;
}
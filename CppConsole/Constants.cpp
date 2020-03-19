#include <iostream>

int main(int argc, char* argv[])
{
	
	int value{ 10 };
	int another_value{ 20 };
	
	//1. pointer to constant
	
	const int* value_ptr = &value; //const is on left hand side of *, so the value it is pointing to is constant
	value_ptr = &another_value; //OK
	//*value_ptr = *value_ptr + 1; //NOT OK



	//2. Const pointer

	int* const value_ptr1 = &value; //Here const is on right of * so pointer is constant , not the value it points to
	*value_ptr1 = *value_ptr1 + 1; //OK
	//*value_ptr1 = &another_value; //NOT OK


	//Const pointer to Const
	const int* const value_ptr3 = &value; //Neither the data pointer points to not the pointer value itself can be changed
	//*value_ptr3 = *value_ptr3 + 1; //NOT OK
	//value_ptr3 = &another_value; //NOT OK

	return 0;
}
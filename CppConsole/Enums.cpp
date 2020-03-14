#include<iostream>

//conventional enums implicitly convert to int, 
//causing errors when someone does not want an enumeration to act as an integer.
//conventional enums export their enumerators to the surrounding scope, causing name clashes.

enum Color { red, green, blue };                    // plain enum 
enum Vehicle { bus, car, train, /* red */ };		//This will not compile

//enum class should be preferred
//as in this case enumerator names are local to the enum and
//their values do not implicitly convert to other types (like another enum or int)

enum class Animal { cat, dog, rat };
enum class Flower { rose, lotus, jasmin };


int main(int argc, char* argv[])
{
	Color redColor = Color::red;
	Vehicle myBus = Vehicle::bus;


	if(myBus == redColor)
	{
		std::cout << "This is so wrong!!" << std::endl;
		int num = myBus; //THis should not be allowed

		//So we use enum class
	}

	Animal myPet = Animal::cat;
	Flower myFlower = Flower::rose;

	//if(myPet == myFlower)
	//{
	//	//This won't even compile
	//}

	//int num = myPet;  //This also won't compile


	return 0;
}
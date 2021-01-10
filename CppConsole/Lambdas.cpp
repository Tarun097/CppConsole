#include <algorithm>
#include <iostream>
#include <string>
#include <vector>


/*
 *  [](){} //valid lambda
 *
 *  [] - capture clause
 *  () - parameters
 *  {} - body
 *
 *
 *	The Capture
 *		Empty [] - capture nothing, use only function parameters
 *		[x,y]    - capture x and y by value (copies are made) from calling scope of lambda
 *				 - Lambda can be used  when x and y  have gone out of scope
 *		[&x, &y] - capture by reference (No copies, changes  affect the  originals)
 *				 - Dangling references may be an issue
 *		[x=a+1, y=std::move(b)]
 *		[=]      - copy "everything" by value
 *				 - Actually it's everything used in the body of the lambda
 *		[&]      - capture everything by reference (Again, only what's used in lambda body only)
 *
 *		You can also mark lambda as "Mutable"
 *
 *		If lambda stored
 *			capture by value
 *		If lambda not stored
 *			capture by value \ reference (like you do in function depending on size of data) 
 *
 *  
 */


int main(int argc, char* argv[])
{
	auto isOdd = [](int num) {return num % 2 != 0; };
	std::vector vec{ 1, 21, 3, 14, 5, -1, 0, 23 };

	const auto numOfOdds = std::count_if(vec.begin(), vec.end(), isOdd);
	std::cout << numOfOdds << "\n";

	int x = 0;
	int y = 20;
	std::string message = "Numbers between " + std::to_string(x) + "and " + std::to_string(y) + " are : ";
	
	std::for_each(vec.begin(), vec.end(), [x, y, &message](int num)
	{
		if(num >= x && num <= y)
		{
			message += " " + std::to_string(num) + " ";
		}
	});

	std::cout << message << "\n";


	x = y = 0;
	//x by value , rest by reference
	std::for_each(vec.begin(), vec.end(), [&, x](int num) mutable
	{
			//mutable allows to change the member variables of the class behind the scenes (lambda is nothing but function object - functor)
			x += num;
			y += num;
	});

	std::cout << "x: " << x << " y :" << y << "\n";

	/*{
		auto pResource = std::make_unique<Resource>(", ");

		//Note: here you cannot copy unique pointer , so you will have to move it
		//Can also take reference , as long as you are sure that pResource will be in scope (Not recommended but works)
		std::for_each(vec.begin(), vec.end(),
		[=, &message, p=std::move(pResource)(int num)
		{
			if(num>=x && num<=y)
				message += p->GetName() + std::to_string(num);
		}]
		);
		
	}*/


	/*
	 * Return Value
	 *	- Lambdas may return a value
	 *	- Only a return statement in the lambda; return type inferred by compiler
	 *	- Compiler can't infer (in case of multiple return statements) - developer specifies return type
	 *	[](int n) -> double {...}   //Here double is return type
	 * 
	 */
	
}
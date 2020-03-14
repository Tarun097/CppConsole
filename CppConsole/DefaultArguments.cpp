#include <iostream>
#include <iomanip>

//Function prototype or forward declartion
//Default args should be written in function prototype only || can also be written in function definition 
//BUT prefer default args in prototype as they are used as frwd declartion
double cal_cost(double amt, double tax = 0.06, double shipping = 3.5);


int main(int argc, char* argv[])
{

	std::cout << std::fixed << std::setprecision(2); //print up to 2 decimal places
	std::cout << cal_cost(100.0) <<std::endl; 
	std::cout << cal_cost(100.0, 0.08) << std::endl;

	return 0;
}

double cal_cost(double amt, double tax, double shipping)
{
	return amt += (amt*tax) + shipping;
}

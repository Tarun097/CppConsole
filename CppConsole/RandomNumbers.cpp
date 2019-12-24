#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


int main(int argc, char* argv[])
{
	srand(time(0));

	for (int i=0;i<10;i++)
	{
		auto die1 = rand() % 6 + 1; // to get numbers between 6 and 1
		auto die2 = rand() % 6 + 1;
		
		cout <<setw(6)<< die1 <<setw(6)<< die2 << endl;
	}

	return 0;
}

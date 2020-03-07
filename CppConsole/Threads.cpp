#include <iostream>
#include <thread>

bool work_done{ false };

void print()
{
	using namespace std::chrono_literals;

	while (!work_done) 
	{
		std::cout << "Doing work ..." << std::this_thread::get_id() << std::endl;
		std::this_thread::sleep_for(1s);
	}
}

int main(int argc, char* argv[])
{
	std::cout << "Main Thread : " << std::this_thread::get_id() << std::endl;

	std::thread t1(print);
	
	std::cin.get();
	work_done = true;
	
	t1.join();
}
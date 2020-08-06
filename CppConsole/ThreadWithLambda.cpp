#include<iostream>
#include<thread>

int main()
{
	std::thread t1([]() 
	{
		std::cout << "Hello from thread " << std::this_thread::get_id() << std::endl;
	});

	int x = 1;

	std::thread t2([&x](int value)
		{
			x = x + value;
		}, 5);

	t1.join();
	t2.join();

	std::cout << x;

	return 0;
}
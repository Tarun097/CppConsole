#include<iostream>
#include<thread>
#include<chrono>

class X
{
private:
	int value{};
public:
	void increaseValueBy(int x)
	{
		using namespace std::chrono_literals;
		std::this_thread::sleep_for(4s);
		value = value + x;
	}

	int getValue()
	{
		return value;
	}
};

int main()
{
	X obj;
	//std::thread(addressOfMemberFunction, ObjAddress, ArgumentIfAny)
	std::thread t1(&X::increaseValueBy, &obj, 5);
	t1.join();
	std::cout << obj.getValue();
	return 0;
}
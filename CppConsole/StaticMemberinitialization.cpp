#include <iostream>

#define LOG(x) std::cout<<x << std::endl;

class Entity
{
private:

	int x = 0;
	const std::string name{ "Unknown" };
	static std::string staticName; 
	//For direct initialization use inline keywork [C++17] :: static inline std::string staticName {"Temp"};

public :

	Entity()
	{

	}

	Entity(const Entity& other)
	{
		LOG("Copy ctor called");
	}

	int getX()
	{
		return x;
	}

	std::string getName()
	{
		return name;
	}

	std::string getStaticVar()
	{
		return staticName;
	}


};

//Have to define static in .Cpp class

std::string Entity::staticName{ "Temp" };


int main(int argc, char* argv[])
{

	Entity e;
	LOG(e.getX());
	LOG(e.getName());

	LOG(e.getStaticVar());

	return 0;
}
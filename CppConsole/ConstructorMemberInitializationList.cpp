#include <iostream>

#define LOG(x) std::cout<< x <<std::endl;

class Sample
{
private : 
	int x = 0;
public:
	Sample()
	{
		std::cout << "Sample() initialized" << std::endl;
	}

	Sample(const Sample& other)
	{
		LOG("Sample Copy Ctor called")
		this->x = other.x;
	}
	
	Sample& operator=(const Sample& other)
	{
		LOG("Sample Assignment ctor called")
		(*this).x = other.x;
		return *this;
	}

	Sample(int x)
	{
		this->x = x;
		std::cout << "Sample(x) initialized" << std::endl;
	}

	int getValue()
	{
		return x;
	}

};


class Entity
{

private :
	Sample sample; //This code gets executed when initialization list is not used , hence multiple instances

public :
	
	Entity(Sample s) : sample(s) //This prevents extra instance creation ;  will call copy construct here
	{
		//sample = s; //This will create Sample instance with default ctor again here
		LOG("Entity(Sample) initialized");
	}

	Entity()
	{
		LOG("Entity() initialized");
	}

	Sample& getSample()
	{
		return sample;
	}

};

int main(int argc, char* argv[])
{
	//Cannot create instance like ::>  Entity e(); [This corresponds to function decleration]
	//Something like this ::> Entity TempFunct(int);

	Entity e(2); //This will create Sample(int) instance here; as explicit not used in ctor of Sample

	Sample& s = e.getSample();

	Sample s2;
	s2 = s; //Assignment constructor called

	

	LOG(s.getValue());

	std::cin.get();
}
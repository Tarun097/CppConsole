#include <iostream>
#include <exception>

/*
 * Template leads to code bloat
 */


//Function template
template <typename  T>
T square(T value)
{
	return  value * value;
}

//Class template
template <class T>
class MyVector
{
private:
	T itemsArray[1000];
	int m_size;

public:
	MyVector():m_size(-1) {};

	T getValueAt(unsigned int index)
	{
		if(index <= static_cast<unsigned int>(m_size))
		{
			return itemsArray[index];
		}
		
		throw "index out of bound";
	}

	void push(T item)
	{
		itemsArray[++m_size] = item;
	}

	void print()
	{
		for(int i=0; i<=m_size ; i++)
		{
			std::cout << itemsArray[i] << std::endl;
		}
	}

	unsigned int size()
	{
		return this->m_size;
	}
};

template<typename T>
MyVector<T> operator*(MyVector<T>& lhs, MyVector<T>& rhs)
{
	MyVector<T> result;

	for (unsigned int i = 0; i <= lhs.size(); ++i)
	{
		result.push(lhs.getValueAt(i) * rhs.getValueAt(i));
	}

	return  result;
}




int main(int argc, char* argv[])
{
	std::cout << square(4) << std::endl;
	std::cout << square(1.2) << std::endl;

	MyVector<int> list;
	list.push(1);
	list.push(2);
	list.push(3);
	list.push(4);
	list.print();

	std::cout << "Squaring the list" << std::endl;
	
	auto squaredList = square(list);
	squaredList.print();
}

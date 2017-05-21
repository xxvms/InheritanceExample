// InheritanceExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Counter // this will be base class
{
protected:
	unsigned int count; // this will be counter
public:
	Counter() : count(0)// No argument constructor
	{}
	Counter(int count_) : count(count_)	//1 argument constructor
	{}
	unsigned int getCount() const	//return count
	{
		return count;
	}
	Counter operator ++ ()			// increase count (prefix)
	{
		return Counter(++count);
	}
};

class CountDown : public Counter //dervied clas
{
public:
	Counter operator --()	//decrease count (prefix) 
	{
		return Counter(--count);
	}
};

int main()
{
	CountDown c1;		// c1 is an instance of the class CountDown

	std::cout << "\nC1= " << c1.getCount(); // display c1
	++c1; ++c1; ++c1; // increment of the c1 3 times

	std::cout << "\nC1= " << c1.getCount(); // display c1

	--c1; --c1;			// decrement c1 twice

	std::cout << "\nC1= " << c1.getCount(); // display c1
    

	system ("pause");
	return 0;
}


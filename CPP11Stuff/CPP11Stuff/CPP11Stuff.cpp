// CPP11Stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <initializer_list>
using namespace std;

class Test
{
public:
	Test(initializer_list<int> numbers)
	{
		int sum = 0;
		for (auto value : numbers)
		{
			sum += value;
		}
	}

	int sum(initializer_list<int> numbers)
	{
		int sum = 0;
		for (auto value : numbers)
		{
			sum += value;
		}
		return sum;
	}
};


int main()
{
	Test test{ 1, 2, 3, 5, 3 };
	int x = test.sum({ 7,8,9,4,6,5,4 });
	cout << x << endl;
	return 0;
}

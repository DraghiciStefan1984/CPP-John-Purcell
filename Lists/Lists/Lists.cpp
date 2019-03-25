// Lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> numbers;
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(88);
	numbers.push_front(25);
	list<int>::iterator iter = numbers.begin();
	for (iter; iter != numbers.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}
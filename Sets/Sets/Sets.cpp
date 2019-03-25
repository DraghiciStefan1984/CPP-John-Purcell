// Sets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> numbers;
	numbers.insert(88);
	numbers.insert(60);
	numbers.insert(8);
	numbers.insert(18);
	numbers.insert(88);
	numbers.insert(8);

	for (set<int>::iterator iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		cout << *iter << endl;
	}

	return 0;
}

// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> strings(5);
	strings[0] = "animal";
	strings[3] = "dog";
	strings.push_back("mouse");
	strings.push_back("cat");
	cout << strings[3] << endl;
	cout << strings.size() << endl;

	//get the first element in a vector via iterator
	vector<string>::iterator iter = strings.begin();
	cout << *iter << endl;

	//loop through the vector
	for (iter; iter != strings.end(); iter++)
	{
		cout << *iter << endl;
	}

	vector<double> numbers(20);
	cout << "Size: " << numbers.size() << endl;
	int capacity = numbers.capacity();
	for (int i = 0; i < 10000; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}

	return 0;
}
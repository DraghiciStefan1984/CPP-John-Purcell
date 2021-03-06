// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class CanGoWrong
{
public:
	CanGoWrong()
	{
		char* pMemory = new char[9999999];
		delete[] pMemory;
	}
};

void MightGoWrong()
{
	bool error = true;
	if (error)
	{
		throw 8;
	}
}

int main()
{
	try
	{
		MightGoWrong();
	}
	catch(int e)
	{
		cout << "Error code: " << e << endl;
	}
	cout << "Still running" << endl;

	try
	{
		CanGoWrong canGoWrong;
	}
	catch (bad_alloc &e)
	{
		cout << e.what() << endl;
	}

	return 0;
}
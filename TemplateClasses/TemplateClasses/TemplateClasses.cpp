// TemplateClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

template<class T>
class Test
{
private:
	T obj;

public:
	Test(T obj)
	{
		this->obj = obj;
	}

	void print()
	{
		cout << obj << endl;
	}
};

int main()
{
	Test<string> test1("Hello");
	test1.print();

	Test<int> test2(88);
	test2.print();
	return 0;
}
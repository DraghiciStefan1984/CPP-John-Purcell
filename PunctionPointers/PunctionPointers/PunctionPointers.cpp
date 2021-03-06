// PunctionPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool match(string test)
{
	return test.size() == 3;
}

void test()
{
	cout << "hello" << endl;
}

void test2(int value)
{
	cout << "hello" << value << endl;
}

int main()
{
	void (*pTest)() = test;
	pTest();

	void(*pTest2)(int) = test2;
	pTest2(23);

	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("four");
	texts.push_back("five");
	texts.push_back("six");

	cout << match("one") << endl;
	cout << match("three") << endl;

	cout << count_if(texts.begin(), texts.end(), match) << endl;

	return 0;
}
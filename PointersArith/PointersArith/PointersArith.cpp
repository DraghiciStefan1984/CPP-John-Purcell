// PointersArith.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int elements = 5;
	string texts[elements] = { "one", "two", "three", "four", "five" };
	string * pTexts = texts;
	cout << pTexts << endl;
	cout << *pTexts << endl;

	string * pEnd = &texts[elements];

	while (pTexts != pEnd)
	{
		cout << *pTexts << endl;
		pTexts++;
	}

	pTexts = &texts[0];

	return 0;
}
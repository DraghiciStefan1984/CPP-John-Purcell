// CharArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string text = "hello";
	//char text[] = { 'h','e','l','l','o' };
	char text[] = "hello everybody";
	cout << text << endl;
	
	//reverse the string
	int textLength = sizeof(text) - 1;
	char * pStart = text;
	char * pEnd = text + textLength - 1;

	while (pStart < pEnd)
	{
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;
		pStart++;
		pEnd--;
	}
	cout << text << endl;

	return 0;
}
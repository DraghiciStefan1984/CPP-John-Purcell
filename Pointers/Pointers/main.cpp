// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void manipulate(double value)
{
	value = 10.5;
	cout << "Value of value is: " << value << endl;
}

void manipulate2(double * value)
{
	*value = 10.5;
	cout << "Value of value is: " << *value << endl;
}

int main()
{
	int intValue = 8;
	int * intValuePtr = &intValue;
	cout << "Value of intValue is: " << intValue << endl;
	cout << "Address of intValue is: " << intValuePtr << endl;
	//dereferencing a pointer
	cout << "Value of intValuePtr is: " << *intValuePtr << endl;

	cout << "====================================" << endl;

	double d = 123.4;
	cout << "Value of d is: " << d << endl;
	//calling manipulate like this will not change the value of d,
	//will only use it inside the function
	manipulate(d);
	cout << "Value of d after mainpulate is: " << d << endl;

	//calling manipulate2 will change the value of d, 
	//because it contains the pointer to the value of an address
	manipulate2(&d);
	cout << "Value of d after mainpulate2 is: " << d << endl;

	cout << "====================================" << endl;

	string texts[] = { "one", "two", "three" };
	cout << sizeof(texts) << endl;
	//get the number of elements in the array
	cout << sizeof(texts)/sizeof(string) << endl;
	int textsLength = sizeof(texts) / sizeof(string);
	for (int i = 0; i < textsLength; i++)
	{
		cout << texts[i] << ", ";
	}
	cout << endl;

	//the pointer will point to the first element of the array
	string * pTexts = texts;
	for (int i = 0; i < textsLength; i++, pTexts++)
	{
		//cout << pTexts[i] << "/";
		//cout << *pTexts++ << "/";
		cout << *pTexts << "/";
	}

	return 0;
}
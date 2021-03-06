// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//calling this method on a variable will not change it
void changeSomething(double value)
{
	value = 123.4;
}

//calling this method on a variable will change it, as it accesses it's value the memory location
void changeSomething2(double& value)
{
	value = 123.4;
}

int main()
{
	int value1 = 8;
	
	//value 2 will store a reference to value1, and if we change the value of value2, we also change the value of value1
	int &value2 = value1;
	value2 = 10;

	cout << "value1: " << value1 << endl;
	cout << "value2: " << value2 << endl;

	double value = 4.321;
	changeSomething(value);
	cout << value << endl;

	changeSomething2(value);
	cout << value << endl;

	//using const, the value a variable will never be changed
	const int constValue = 88;

	int otherValue = 888;
	int secondValue = 99;
	int * otherValuePtr = &otherValue;
	cout << "value of otherValuePtr: " << *otherValuePtr << endl;

	otherValuePtr = &secondValue;
	cout << "value of otherValuePtr: " << *otherValuePtr << endl;

	// a pointer to an int that is constant. we cannot change the value of the variable it's pointing to
	const int * constValuePtr1 = &otherValue;
	// a constant pointer to an int. we cannot reassign the pointer to another variable
	int * const constValuePtr2 = &otherValue;
	// a constant pointer to an int that is constant. we cannot reassign the pointer to another variable 
	// and neither the value of the variable it's pointing to
	const int * const constValuePtr3 = &otherValue;

	return 0;
}
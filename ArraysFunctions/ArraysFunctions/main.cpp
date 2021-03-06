// ArraysFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void Show1(string *texts)
{
	for (int i = 0; i < sizeof(texts); i++)
	{
		cout << texts[i] << endl;
	}
}

//common practice is to reserve and free the memory used by functions
char* GetMemory()
{
	char* pMem = new char[100];
	return pMem;
}

void FreeMemory(char* pMem)
{
	delete[] pMem;
}

int main()
{
	string texts[] = { "apple", "orange", "banana", "melon" };
	Show1(texts);
	delete texts;

	char* pMem = GetMemory();
	FreeMemory(pMem);

	return 0;
}
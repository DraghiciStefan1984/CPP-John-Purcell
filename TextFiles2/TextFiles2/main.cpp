// TextFiles2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename = "stats.txt";
	ifstream input;
	input.open(filename);
	if (!input.is_open())
	{
		return 1;
	}
	while (input)
	{
		string line;
		getline(input, line, ':');
		int population;
		input >> population;
		cout << line << " -- " << population << endl;
	}
	input.close();
	return 0;
}
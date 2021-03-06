// TextFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//write to a file
	string outFileName = "test.txt";
	ofstream outFile;
	outFile.open(outFileName);

	if (outFile.is_open())
	{
		outFile << "Hello test" << endl;
		outFile << 12456 << endl;
		outFile.close();
	}
	else
	{
		cout << "Could not create file: " << outFileName << endl;
	}

	//read from a file
	string inFileName = "test.txt";
	ifstream inFile;
	inFile.open(inFileName);
	if (inFile.is_open())
	{
		string line;
		while (!inFile.eof())
		{
			//inFile >> line;
			getline(inFile, line);
			cout << line << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Could not read file: " << inFileName << endl;
	}
	return 0;
}

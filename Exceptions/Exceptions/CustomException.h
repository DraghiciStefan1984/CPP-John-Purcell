#pragma once
#include <iostream>
#include <exception>

class CustomException : public _exception 
{
public:
	CustomException();
	~CustomException();
};


#pragma once
class AbstractClass
{
public:
	AbstractClass();
	virtual ~AbstractClass();
	//subclass must implement this method
	virtual void Method1() = 0;
	//subclass not forced to implement this method
	virtual int Method2() {};
};


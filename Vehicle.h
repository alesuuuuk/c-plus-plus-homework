#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private:

public:
	virtual void startEngine() = 0;

	virtual void stopEngine() = 0;
};


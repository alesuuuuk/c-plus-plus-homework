#pragma once
#include <iostream>
using namespace std;
class Number
{
private:
public:
	virtual float getNumber() {
		return 0;
	}
	virtual void setNumber(float number){}
	virtual void plusNUmber(int number){}
	virtual void minusNumber(int number){}
	virtual void multiplyNumber(int number){}
	virtual void devideNumber(int number){}

};


#pragma once
#include "Number.h"
class Real :public Number
{
private:
	float number;
public:
	void setNumber(float number) override {
		this->number = number;
	}
	float getNumber() override {
		return this->number;
	}
	void plusNUmber(int number) override {
		this->number += number;
		cout << this->number << endl;
	}
	void minusNumber(int number) override {
		this->number -= number;
		cout << this->number << endl;
	}
	void multiplyNumber(int number) override {
		this->number *= number;
		cout << this->number << endl;
	}
	void devideNumber(int number) override {
		this->number /= number;
		cout << this->number << endl;
	}
};


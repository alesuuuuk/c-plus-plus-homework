#pragma once
#include "Number.h"
class Integer :public Number
{
private:
	int number;
public:
	float getNumber() override {
		return this->number;
	}
	 void setNumber(float number) override {
		 this->number = number;
		 cout << this->number << endl;
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
#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class RightTriangle
{
private:
	int katetOne;
	int katetTwo;
	int countHypotenuse() {
		int squareOfhypotenuse = (katetOne * katetOne) + (katetTwo * katetTwo);
		return sqrt(squareOfhypotenuse);
	}
public:
	RightTriangle() {
		katetOne = 0;
		katetTwo = 0;
	}
	void setFirstKatet( int newFirstKatet) {
		this->katetOne = newFirstKatet;
	}
	void setSecondKatet(int newSecondKatet) {
		this->katetTwo = newSecondKatet;
	}
	int getHypotenuse() {
		return countHypotenuse();
	}
	
	
};



#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
private:

public:
	void startEngine() override {
		cout << "DODLE HELLCAT 1.66 TO 100 KM/HOUR JUST STARTED RATATATATATATATA" << endl;
	}
	void stopEngine() override {
		cout << "HE BURNED UP 1 LITER JUST IN 1 MS WE SHOULD STOP THE ENGINE" << endl;
	}
};


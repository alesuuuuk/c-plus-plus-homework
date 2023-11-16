#include <iostream>
// including classes
#include "Integer.h"
#include "Number.h"
#include "Real.h"

using namespace std;
int main()
{
    cout << "Hello World!" << endl;

    // creating objects of classes
    Number* number = new Number();
    Number* integer = new Integer();
    Number* real = new Real();

    // showing results of classes:

    // class Integer
    // seting number
    integer->setNumber(10);
    cout << "_____________ INTEGER __________" << endl;
    // getting number
    cout << integer->getNumber() << endl;
    // plusing number for 5(int method there is a cout) 
    integer->plusNUmber(5);
    // minusing number for 5(int method there is a cout) 
    integer->minusNumber(5);
    // multiplying number for 5(int method there is a cout) 
    integer->multiplyNumber(5);
    // deviding number for 5(int method there is a cout) 
    integer->devideNumber(5);
    
    // class Real
    cout << "____________________ REAL ________________________" << endl;
    // setting number
    real->setNumber(12.4);
    // getting number
    cout << real->getNumber() << endl;
    // plusing number for 5(int method there is a cout) 
    real->plusNUmber(5);
    // minusing number for 5(int method there is a cout) 
    real->minusNumber(5);
    // multiplying number for 5(int method there is a cout) 
    real->multiplyNumber(5);
    // deviding number for 5(int method there is a cout) 
    real->devideNumber(5);

}


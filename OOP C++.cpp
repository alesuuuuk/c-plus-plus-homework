#include <iostream>
#include "RightTriangle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    // TASK ONE 
    string choice;
    RightTriangle triangle;
    Rectangle rectangle;
    while (true)
    {
        cout << endl << "1 - set new first katet; 2 - set new secont katet; 3 - get hypotenuse 4 - exit" << endl;
        cin >> choice;
        if (choice == "1") {
            int num;
            cout << endl << "Type number for first katet: ";
            cin >> num;
            triangle.setFirstKatet(num);
        }
        else if (choice == "2") {
            int num;
            cout << endl << "Type number for second katet: ";
            cin >> num;
            triangle.setSecondKatet(num);
        }
        else if (choice == "3") {
           cout << endl << triangle.getHypotenuse() << endl;
        }
        else if(choice == "4")
        {
            cout << rectangle.getWidth() << endl << rectangle.getHeight() << endl;
            break;
        }
        else {
            cout << "not found such command";
        }
    }
    // TASK TWO
    while (true)
    {
        cout << endl << "1 - set new height; 2 - set new width; 3 - get area 4 - get perimeter; 5 - draw a rectangle; 6 - exit" << endl;
        cin >> choice;
        if (choice == "1") {
            int num;
            cout << endl << "Type number for height: ";
            cin >> num;
            rectangle.setHeight(num);
        }
        else if (choice == "2") {
            int num;
            cout << endl << "Type number for width: ";
            cin >> num;
            rectangle.setWidth(num);
        }
        else if (choice == "3") {
            cout << endl <<rectangle.getArea() << endl;
        }
        else if (choice == "4") {
            cout << endl << rectangle.getPerimeter() << endl;
        }
        else if (choice == "5")
        {
            int height = rectangle.getHeight();
            int width = rectangle.getWidth();
            for (int i = 0; i <= height; i++) {
                for (int j = 0; j <= width; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (choice == "6") {
            break;
        }
        else {
            cout << "not found such command";
        }
    }
        
    

}

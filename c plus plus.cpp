#include <iostream>
using namespace std;
int main()
{
    // TASK ONE 
    int seconds;
    std::cout << "Enter the number of seconds that have passed since the start of the day: ";
    std::cin >> seconds;

    int hours, minutes;
    hours = seconds / 3600;  
    seconds %= 3600;  
    minutes = seconds / 60;  
    seconds %= 60;  

    std::cout << "Current time: " << hours << " hours " << minutes << " minutes " << seconds << " seconds" << std::endl;

    
    int remainingHours = 24 - hours;
    int remainingMinutes = 60 - minutes;
    int remainingSeconds = 60 - seconds;

    std::cout << "Time to midnight: " << remainingHours << " hours " << remainingMinutes << " minutes " << remainingSeconds << " seconds" << std::endl;

    // TASK TWO
    int number;
    std::cout << "Enter a four-digit number: ";
    std::cin >> number;

    int digit;
    std::cout << "The number is in reverse order: ";

    while (number > 0) {
        digit = number % 10;  // Отримуємо останню цифру
        std::cout << digit;
        number /= 10;  // Видаляємо останню цифру
    }

    std::cout << std::endl;
    
}


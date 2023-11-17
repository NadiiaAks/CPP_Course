#include <iostream>
#include <iomanip>

enum WeekDays : char
{
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5,
    Sat = 6,
    Sun = 7
};

int main()
{
    std::cout << "[Exercise 1]" << std::endl;
    int a, b, c;
    std::cout << "Enter integer 1: ";
    std::cin >> a;
    std::cout << "Enter integer 2: ";
    std::cin >> b;
    c = a;
    a = b;
    b = c;
    std::cout << "Replacement...\n" << "Integer 1: " << a << "\nInteger 2: " << b << std::endl;

    std::cout << "\n[Exercise 2]" << std::endl;
    int doubleToInt;
    double myValue = 20.333;
    doubleToInt = (int)myValue;
    std::cout << "Double: " << myValue << "\nDouble to Int: " << doubleToInt << std::endl;
    char forFill = '$';
    std::cout << std::setfill(forFill) << std::setw(20) << std::right << doubleToInt << std::endl;

    std::cout << "\n[Exercise 3]" << std::endl;
    double number = 124.5675431123;
    std::cout << "2 chars: " << std::fixed << std::setprecision(2) << number << std::endl;
    std::cout << "5 chars: " << std::fixed << std::setprecision(5) << number << std::endl;
    std::cout << "10 chars: " << std::fixed << std::setprecision(10) << number << std::endl;
    std::cout << "e-notation: " << std::scientific << number << std::endl;

    std::cout << "\n[Exercise 4]" << std::endl;
    WeekDays DayOne = WeekDays::Mon;
    WeekDays DayTwo = WeekDays::Tue;
    WeekDays DayThree = WeekDays::Wed;
    WeekDays DayFour = WeekDays::Thu;
    WeekDays DayFive = WeekDays::Fri;
    WeekDays DaySix = WeekDays::Sat;
    WeekDays DaySeven = WeekDays::Sun;
    std::cout << int(DayOne) << std::endl;
    std::cout << int(DayTwo) << std::endl;
    std::cout << int(DayThree) << std::endl;
    std::cout << int(DayFour) << std::endl;
    std::cout << int(DayFive) << std::endl;
    std::cout << int(DaySix) << std::endl;
    std::cout << int(DaySeven) << std::endl;

    std::cout << "\n[Exercise 5]" << std::endl;
    std::cout << "Enter number: ";
    int myNum;
    std::cin >> myNum;
    bool isNum = bool(myNum);
    std::cout << "Your bool is: " << std::boolalpha << isNum << std::endl;
}
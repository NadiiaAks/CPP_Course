#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
{
    std::cout << "[Exercise 1]" << std::endl;
    int mySec;
    std::cout << "Give your number: " << std::endl;
    std::cin >> mySec;
    int resultSec, resultMin, resultHours;
    resultHours = mySec / 3600;
    resultMin = (mySec - resultHours * 3600) / 60;
    resultSec = (mySec - resultHours * 3600) - resultMin * 60;
    std::cout << "You played: " << resultHours << "H, " << resultMin << "MIN, " << resultSec 
        << "SEC." << std::endl;

    std::cout << "\n[Exercise 2]" << std::endl;
    int a, b, c;
    std::cout << "Give three numbers: " << std::endl;
    std::cin >> a >> b >> c;
    int sum = a + b + c;
    int mult = a * b * c;
    double arithmeticMean = (double)sum / 3;
    bool firstAndSecond = a == b;
    bool secondAndThird = b == c;
    std::cout << "Sum: " << sum << "\nMultiplication: " << mult << "\nArithmetic Mean: " << 
        arithmeticMean << "\nFirst and second are equal? " << std::boolalpha << firstAndSecond <<
        "\nSecond and Third are equal? " << std::boolalpha << secondAndThird << std::endl;

    std::cout << "\n[Exercise 3]" << std::endl;
    int firstNum, secondNum;
    std::cout << "Give two numbers: " << std::endl;
    std::cin >> firstNum >> secondNum;
    bool lessThan = firstNum < secondNum;
    bool equal = firstNum == secondNum;
    bool moreThan = firstNum > secondNum;
    bool lessOrEqual = firstNum <= secondNum;
    std::cout << "First num less than second? " << std::boolalpha << lessThan << 
        "\nFirst num equal with second? " << std::boolalpha << equal <<
        "\nFirst num more than second? " << std::boolalpha << moreThan <<
        "\nFirst num less or equal than second? " << std::boolalpha << lessThan << std::endl;

    std::cout << "\n[Exercise 4]" << std::endl;
    int firstSide, secondSide;
    std::cout << "Give first side of your rectangle: " << std::endl;
    std::cin >> firstSide;
    std::cout << "Give second side of your rectangle: " << std::endl;
    std::cin >> secondSide;
    int perimeterRect = 2 * (firstSide + secondSide);
    int areaRect = firstSide * secondSide;
    std::cout << "Perimeter of your rectangle is: " << perimeterRect << 
        "\nArea of your rectangle is: " << areaRect << std::endl;

    std::cout << "\n[Exercise 5]" << std::endl;
    double myRadius;
    std::cout << "Give radius of your circle: " << std::endl;
    std::cin >> myRadius;
    double myAreaCircle = M_PI * pow(myRadius, 2);
    double myCircumference = 2 * M_PI * myRadius;
    std::cout << "Circumference is: " << myCircumference <<
        "\nArea of circle is: " << myAreaCircle << std::endl;
}
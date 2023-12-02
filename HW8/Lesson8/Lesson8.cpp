#include <iostream>
#include "LoopFunctions.h"
#include "RecursiveFunctions.h"

int main()
{
    std::cout << "[Exercise 1]" << std::endl;
    int myNum;
    std::cout << "How many numbers do you want to enter?" << std::endl;
    std::cin >> myNum;
    countNum(myNum);

    std::cout << "\n[Exercise 2]" << std::endl;
    int myFactorial;
    std::cout << "What number factorial will we calculate?" << std::endl;
    std::cin >> myFactorial;
    int resultLoop = loopFactorial(myFactorial);
    int resultRecursive = recursionFactorial(myFactorial);
    std::cout << "Factorial of " << myFactorial << " is: " << resultLoop 
        << " (calculate with loop function)" << std::endl;
    std::cout << "Factorial of " << myFactorial << " is: " << resultRecursive
        << " (calculate with recursive function)" << std::endl;

    std::cout << "\n[Exercise 3]" << std::endl;
    int count;
    std::cout << "Enter the count of your numbers: " << std::endl;
    std::cin >> count;
    std::cout << "Descending (Loop): " << std::endl;
    loopPrintNaturalNumDescending(count);
    std::cout << "Ascending (Loop): " << std::endl;
    loopPrintNaturalNumAscending(count);
    std::cout << "Descending (Recursive): " << std::endl;
    recursivePrintNaturalNumbDescending(count);
    std::cout << "Ascending (Recursive): ";
    recursivePrintNaturalNumbAscending(count);


}
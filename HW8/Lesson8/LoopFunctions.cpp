#include <iostream>

void countNum(int count) 
{
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    int inputNum;

    std::cout << "Enter yor numbers pls: " << std::endl;
    for (int i = 0; i < count; i++) 
    {
        std::cin >> inputNum;

        if (inputNum > 0) 
        {
            positiveCount++;
        }
        else if (inputNum < 0) 
        {
            negativeCount++;
        }
        else 
        {
            zeroCount++;
        }
    }

    std::cout << "Positive: " << positiveCount << ", negative: " << negativeCount << ", zeroes: " << zeroCount << std::endl;
}

int loopFactorial (int count) 
{
    int result = 1;
    for (int i = 1; i <= count; i++) 
    {
        result *= i;
    }
    return result;
}

void loopPrintNaturalNumDescending(int count) 
{
    for (int i = count; i >= 1; i--) 
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void loopPrintNaturalNumAscending(int count) 
{
    for (int i = 1; i <= count; i++) 
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
#include <iostream>
#include "Functions.h"

int main()
{
    std::cout << "[Exercise 1]" << std::endl;
    int firstNum, secondNum;
    std::cout << "Enter first numbers: " << std::endl;
    std::cin >> firstNum;
    std::cout << "Enter second numbers: " << std::endl;
    std::cin >> secondNum;
    std::cout << "Before swap by reference: firstNum = " << firstNum << ", secondNum = " << secondNum << std::endl;
    swap(firstNum, secondNum);
    std::cout << "After swap by reference: firstNum = " << firstNum << ", secondNum = " << secondNum << std::endl;
    int* ptrFirst = &firstNum;
    int* ptrSecond = &secondNum;
    std::cout << "Before swap by pointers: firstNum = " << firstNum << ", secondNum = " << secondNum << std::endl;
    swap(ptrFirst, ptrSecond);
    std::cout << "After swap by pointers: firstNum = " << firstNum << ", secondNum = " << secondNum << std::endl;

    std::cout << "\n[Exercise 2]" << std::endl;
    int size;
    std::cout << "Enter size of your array: ";
    std::cin >> size;
    if (size <= 0) 
    {
        std::cout << "Invalid array size :(" << std::endl;
        return 1;
    }
    double* numbers = new double[size];
    std::cout << "Enter " << size << " numbers: " << std::endl;
    for (int i = 0; i < size; i++) 
    {
        std::cin >> numbers[i];
    }
    double totalSum = 0.0;
    if (calculateSum(numbers, size, totalSum)) 
    {
        std::cout << "Sum of elements: " << totalSum << std::endl;
    }
    else 
    {
        std::cout << "Array size is not positive." << std::endl;
    }
    delete[] numbers;

    std::cout << "\n[Exercise 3]" << std::endl;
    int arr[] = { 1, 3, 5, 7, 9 };
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    int elem;
    std::cout << "Enter element to find: ";
    std::cin >> elem;
    if (findMyNum(arr, size, elem)) 
    {
        std::cout << "Element found in the array." << std::endl;
    }
    else 
    {
        std::cout << "Element not found in the array." << std::endl;
    }

}
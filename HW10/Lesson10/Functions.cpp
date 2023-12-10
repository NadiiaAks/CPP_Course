#include <iostream>

void swap(int& numFirst, int& numSecond) 
{
    int temp = numFirst;
    numFirst = numSecond;
    numSecond = temp;
}

void swap(int* ptrFirst, int* ptrSecond) 
{
    int temp = *ptrFirst;
    *ptrFirst = *ptrSecond;
    *ptrSecond = temp;
}

bool calculateSum(const double* arr, int arrSize, double& sum) 
{
    if (arrSize <= 0) 
    {
        return false;
    }

    sum = 0.0;

    for (int i = 0; i < arrSize; ++i) 
    {
        sum += arr[i];
    }

    return true;
}

bool findMyNum(const int* arr, int size, int elem) 
{
    const int* end = arr + size;

    while (size-- > 0) 
    {
        if (*arr == elem) {

            return true;
        }
        arr++;
    }

    return false;
}
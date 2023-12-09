#include <iostream>

int recursionFactorial (int count) 
{
    if (count <= 1) 
    {
        return 1;
    }
    else 
    {
        return count * recursionFactorial(count - 1);
    }
}

void recursivePrintNaturalNumbDescending(int count)
{
    if (count >= 1) 
    {
        std::cout << count << " ";
        recursivePrintNaturalNumbDescending(count - 1);
    }
    else 
    {
        std::cout << std::endl;
    }
}

void recursivePrintNaturalNumbAscending(int count)
{
    if (count >= 1)
    {
        recursivePrintNaturalNumbAscending(count - 1);
        std::cout << count << " ";
    }
    else
    {
        std::cout << std::endl;
    }
}


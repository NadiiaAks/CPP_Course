#include <iostream>
#include <cctype>
#include <cstring>

void translateArray(int numbers[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        if (numbers[i] > 0) 
        {
            numbers[i] *= 2; 
        }
        else 
        {
            numbers[i] = 0;
        }
    }
}

void printArray(int numbers[], int size) 
{
    std::cout << "Your new array:" << std::endl;
    for (int i = 0; i < size; i++) 
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

void inputArray(int numbers[], int size) 
{
    std::cout << "Enter " << size << " numbers:" << std::endl;
    for (int i = 0; i < size; i++) 
    {
        std::cin >> numbers[i];
    }
}

void makeUppercase(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (std::isalpha(str[i]) && std::islower(str[i])) 
        {
            str[i] = std::toupper(str[i]);
        }
    }
}

bool isPalindrome(const char str[])
{
    int first = 0;
    int last = std::strlen(str) - 1;

    while (last > first)
    {
        while (!std::isalpha(str[first]))
        {
            first++;
        }

        while (!std::isalpha(str[last]))
        {
            last--;
        }

        if (std::tolower(str[first]) != std::tolower(str[last]))
        {
            return false;

            first++;
            last--;
        }
        return true;
    }
}

void parseStringLetters(const char str[], int& vowelsCount, int& consonantsCount)
{
    vowelsCount = 0;
    consonantsCount = 0;

    for (int i = 0; str[i] != '\0'; ++i) 
    {
        char ch = std::tolower(str[i]);

        if (std::isalpha(ch)) 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowelsCount++;
            }
            else 
            {
                consonantsCount++;
            }
        }
    }
}

bool isEqual(const char str1[], const char str2[]) 
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] != str2[i]) 
        {
            return false;
        }
        i++;
    }

    return true;
}


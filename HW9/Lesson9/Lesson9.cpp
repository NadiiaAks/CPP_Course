#include <iostream>
#include "MyFunctions.h"

int main()
{
    const int maxString = 100;

    std::cout << "[Exercise 1]" << std::endl;
    const int size = 10;
    int numbers[size];
    inputArray(numbers, size);
    translateArray(numbers, size);
    printArray(numbers, size);

    std::cout << "\n[Exercise 2]" << std::endl;
    char str[maxString];
    std::cout << "Enter your string: ";
    std::cin >> str;
    makeUppercase(str);
    std::cout << "Uppercase string: " << str << std::endl;

    std::cout << "\n[Exercise 3]" << std::endl;
    char myStr[maxString];
    std::cout << "Enter your string: " << std::endl;
    std::cin >> myStr;
    if (isPalindrome(myStr)) 
    {
        std::cout << "Yes, your string it's palindrom." << std::endl;
    }
    else 
    {
        std::cout << "No, your string isn't palindrom." << std::endl;
    }

    std::cout << "\n[Exercise 4]" << std::endl;
    char newStr[maxString];
    int myVowels = 0;
    int myConsonants = 0;
    std::cout << "Enter your string: " << std::endl;
    std::cin >> newStr;
    parseStringLetters(newStr, myVowels, myConsonants);
    std::cout << "Vowels: " << myVowels << std::endl;
    std::cout << "Consonants: " << myConsonants << std::endl;

    std::cout << "\n[Exercise 5]" << std::endl;
    char str1[maxString], str2[maxString];
    std::cout << "Enter your first string: ";
    std::cin >> str1;
    std::cout << "Enter your second string: ";
    std::cin >> str2;
    if (isEqual(str1, str2)) 
    {
        std::cout << "Strings are equal." << std::endl;
    }
    else 
    {
        std::cout << "Strings aren't equal." << std::endl;
    }
}
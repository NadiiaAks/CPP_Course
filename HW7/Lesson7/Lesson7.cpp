#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    int attempts = 0;
    std::srand(std::time(nullptr));
    int myRange;
    std::cout << "Give the guessing range: " << std::endl;
    std::cin >> myRange;
    int randomNum = rand() % (myRange + 1);

    while (true) 
    {
        int myNum = 0;

        std::cout << "\nEnter a number from 0 to " << myRange 
            << ", enter -1 if you want finish game." << std::endl;
        std::cin >> myNum;

        if (myNum == -1) 
        {
            std::cout << "\nExit" << std::endl;
            break;
        }
        else if (myNum < 0 || myNum > myRange) {
            std::cout << "The entered number is outside the range of possible values!" << std::endl;
            continue;
        }

        attempts++;

        if (myNum == randomNum) 
        {
            std::cout << "\nCongratulations! You guessed the number!" << std::endl;
            std::cout << "Number of attempts: " << attempts << std::endl;
            attempts = 0;
            break;
        }
        else 
        {
            if (myNum > randomNum + 20) 
            {
                std::cout << "Your number is too high (more than 20)" << std::endl;
            }
            else if (myNum > randomNum + 10) 
            {
                std::cout << "Your number is greater than the guessed number (more than 10)" << std::endl;
            }
            else if (randomNum > myNum + 20) 
            {
                std::cout << "The hidden number is too large (more than 20 from your number)" << std::endl;
            }
            else if (randomNum > myNum + 10) 
            {
                std::cout << "The hidden number is greater than yours (more than 10)" << std::endl;
            }
            else 
            {
                std::cout << "Your number is within acceptable range" << std::endl;
            }
        }
    }
}

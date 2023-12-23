#include <iostream>
#include <string>
#include <cctype>

bool checkGuess(const std::string& secretWord, const std::string& guessedWord, std::string& result)
{
    if (secretWord.length() != guessedWord.length())
    {
        return false;
    }

    result = "";

    for (size_t i = 0; i < secretWord.length(); i++)
    {
        if (std::tolower(secretWord[i]) == std::tolower(guessedWord[i]))
        {
            result += secretWord[i];
        }
        else
        {
            result += '?';
        }
    }
    return true;
}

bool isValidInput(const std::string& word)
{
    if (word.length() != word.length())
    {
        return false;
    }
    for (char c : word)
    {
        if (!isalpha(c))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string secretWord = "KITTEN";
    int attempts = secretWord.length();

    std::cout << "Welcome to Wordle!\n";
    std::cout << "Guess the " << secretWord.length() << "-letter word in " << attempts << " attempts!" << std::endl;

    while (attempts > 0)
    {
        std::string guess;
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (!isValidInput(guess))
        {
            std::cout << "Invalid input. Please enter a 5-letter word containing only alphabetic characters.\n";
            continue;
        }

        std::string result;
        if (checkGuess(secretWord, guess, result))
        {
            if (result == secretWord)
            {
                std::cout << "Congratulations! I guessed the word: " << secretWord << std::endl;
                break;
            }
            else
            {
                std::cout << "Result: " << result << std::endl;
                attempts--;
                std::cout << "Attempts left: " << attempts << std::endl;
            }
        }
        else
        {
            std::cout << "Incorrect guess. Try again!\n";
        }
    }

    if (attempts <= 0)
    {
        std::cout << "Game over! My word was: " << secretWord << std::endl;
    }

}
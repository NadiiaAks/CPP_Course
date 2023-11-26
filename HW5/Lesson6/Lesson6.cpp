#include <iostream>

int main()
{
    std::cout << "[Exercise 1]" << std::endl;
    int firstElement, step, lastNum;
    std::cout << "Write the first element, the step of the arithmetic progression and the number of the last element: " << std::endl;
    std::cin >> firstElement >> step >> lastNum;
    std::cout << "Arithmetic progression: " << std::endl;
    for (int i = 0; i < lastNum; i++)
    {
        std::cout << firstElement + i * step << ";";
    }

    std::cout << "\n[Exercise 2]" << std::endl;
    int n;
    std::cout << "Write the Fibonacci element number: " << std::endl;
    std::cin >> n;
    int f, f1 = 1, f2 = 1;
    if (n <= 0)
    {
        std::cout << "n can't be 0 or less" << std::endl;
    }
    else if (n == 1 || n == 2)
    {
        f = 1;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
    }
    std::cout << "Your Fibonacci element is: " << f << std::endl;

    std::cout << "\n[Exercise 3]" << std::endl;
    int yourNum;
    unsigned long long factorial = 1;
    std::cout << "What number factorial do you need?" << std::endl;
    std::cin >> yourNum;
    if (yourNum < 0)
    {
        std::cout << "Your number must be positive. Try again." << std::endl;
    }
    else
    {
        for (int i = 1; i <= yourNum; i++)
        {
            factorial *= i;
        }

        std::cout << "The factorial of your number is: " << factorial << std::endl;

    }

    std::cout << "\n[Exercise 4]" << std::endl;
    int rows, columns;
    std::cout << "Write 2 numbers - first for rows and second for columns" << std::endl;
    std::cin >> rows >> columns;
    std::cout << "\na." << std::endl;
    for (int i = rows; i > 0; i--) 
    {
        for (int j = 0; j < i; j++) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "\nb." << std::endl;
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "\nc." << std::endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "\nd." << std::endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < columns; j++) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "\ne." << std::endl;
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = i; j >= 1; j--) 
        {
            if (j % 2 == 0) 
            {
                std::cout << "0";
            }
            else 
            {
                std::cout << "1";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "\n[Exercise 5]" << std::endl;
    char myChar;
    int sumNumbers = 0;
    while (true) {
        std::cout << "For exit give the symbol '.' " << std::endl;
        std::cin >> myChar;

        if (myChar == '.') 
        {
            std::cout << "The end..." << std::endl;
            break;
        }
        else if (islower(myChar)) 
        {
            char upperсaseChar = toupper(myChar);
            std::cout << "Uppercase char: " << upperсaseChar << std::endl;
        }
        else if (isdigit(myChar)) 
        {
            int num = myChar - '0';
            sumNumbers += num;
            std::cout << "Sum is: " << sumNumbers << std::endl;
        }
        else 
        {
            std::cout << "Char '" << myChar << "' not available" << std::endl;
        }
    }
}

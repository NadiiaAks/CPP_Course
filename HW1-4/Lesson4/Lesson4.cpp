#include <iostream>

enum class Month : char
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int main()
{
    std::cout << "[Exercise 1]" << std::endl;
    int a, b, c, max;
    std::cout << "Give 3 numbers: " << std::endl;
    std::cin >> a >> b >> c;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }
    std::cout << "Largest number: " << max << std::endl;

    std::cout << "\n[Exercise 2]" << std::endl;
    int firstNum, secondNum;
    std::cout << "Give 2 numbers: " << std::endl;
    std::cin >> firstNum >> secondNum;
    int minNum = (firstNum < secondNum) ? firstNum : secondNum;
    std::cout << "Smaller number: " << minNum << std::endl;

    std::cout << "\n[Exercise 3]" << std::endl;
    int yourNum;
    std::cout << "Give your number: " << std::endl;
    std::cin >> yourNum;
    if (yourNum % 5 == 0 && yourNum % 11 == 0)
    {
        std::cout << "Your number is divisible by 5 and 11" << std::endl;
    }
    else
    {
        std::cout << "Your number isn't divisible by 5 and 11" << std::endl;
    }

    std::cout << "\n[Exercise 4]" << std::endl;
    int firstAngle, secondAngle, thirdAngle;
    std::cout << "Give 3 angles of triangle: " << std::endl;
    std::cin >> firstAngle >> secondAngle >> thirdAngle;
    if (firstAngle + secondAngle + thirdAngle == 180)
    {
        std::cout << "Yes, it's triangle" << std::endl;
    }
    else
    {
        std::cout << "No, it isn't triangle" << std::endl;
    }

    std::cout << "\n[Exercise 5]" << std::endl;
    int monthOfBirthday;
    std::cout << "Give the number of your birth month" << std::endl;
    std::cin >> monthOfBirthday;
    Month yourMonth = static_cast<Month>(monthOfBirthday);
    switch (yourMonth)
    {
    case Month::January:
        std::cout << "January" << std::endl;
        break;
    case Month::February:
        std::cout << "February" << std::endl;
        break;
    case Month::March:
        std::cout << "March" << std::endl;
        break;
    case Month::April:
        std::cout << "April" << std::endl;
        break;
    case Month::May:
        std::cout << "May" << std::endl;
        break;
    case Month::June:
        std::cout << "June" << std::endl;
        break;
    case Month::July:
        std::cout << "July" << std::endl;
        break;
    case Month::August:
        std::cout << "August" << std::endl;
        break;
    case Month::September:
        std::cout << "September" << std::endl;
        break;
    case Month::October:
        std::cout << "October" << std::endl;
        break;
    case Month::November:
        std::cout << "November" << std::endl;
        break;
    case Month::December:
        std::cout << "December" << std::endl;
        break;
    default:
        std::cout << "This isn't correct number of month" << std::endl;
    }

    std::cout << "\n[Exercise 6]" << std::endl;
    int monthOfSeason;
    std::cout << "Give the number of month" << std::endl;
    std::cin >> monthOfSeason;
    if (monthOfSeason >= 1 && monthOfSeason <= 12)
    {
        if (monthOfSeason >= 3 && monthOfSeason <= 5)
        {
            std::cout << "It's spring" << std::endl;
        }
        else if (monthOfSeason >= 6 && monthOfSeason <= 8)
        {
            std::cout << "It's summer" << std::endl;
        }
        else if (monthOfSeason >= 9 && monthOfSeason <= 11)
        {
            std::cout << "It's autumn" << std::endl;
        }
        else
        {
            std::cout << "It's winter" << std::endl;
        }
    }
    else
    {
        std::cout << "This isn't correct number of month" << std::endl;
    }
    
}
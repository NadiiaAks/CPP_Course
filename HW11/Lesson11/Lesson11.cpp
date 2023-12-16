#include <iostream>

const int rows = 3;
const int columns = 4;
enum class SortingDirection { ascending, descending };

bool find(int arr_2d[rows][columns], int toFind) 
{
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < columns; ++j) 
        {
            if (arr_2d[i][j] == toFind) 
            {
                return true;
            }
        }
    }
    return false;
}

bool isSorted(const int* arr, int size, SortingDirection direction) 
{
    if (direction == SortingDirection::ascending) 
    {
        for (int i = 0; i < size - 1; ++i) 
        {
            if (arr[i] > arr[i + 1]) 
            {
                return false;
            }
        }
    }
    else if (direction == SortingDirection::descending) 
    {
        for (int i = 0; i < size - 1; ++i) 
        {
            if (arr[i] < arr[i + 1]) 
            {
                return false;
            }
        }
    }
    return true;
}

void traverseTopDownRightLeftByColumns(int arr_2d[rows][columns]) {
    for (int col = columns - 1; col >= 0; col--) 
    {
        for (int row = 0; row < rows; row++) 
        {
            std::cout << arr_2d[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

void traverseLeftRightDownTopSwitchingByRows(int arr_2d[rows][columns]) {
    bool direction = true;

    for (int row = rows - 1; row >= 0; row--)
    {
        if (direction) 
        {
            for (int col = 0; col < columns; col++)
            {
                std::cout << arr_2d[row][col] << " ";
            }
            std::cout << std::endl;
        }
        else 
        {
            for (int col = columns - 1; col >= 0; col--)
            {
                std::cout << arr_2d[row][col] << " ";
            }
            std::cout << std::endl;
        }
        direction = !direction;
    }
}

int main() 
{
    std::cout << "[Exercise 1]" << std::endl;
    int arr[rows][columns] = 
    {
        {1, 12, 22, 15},
        {0, 66, 67, 8},
        {4, 7, 11, 90}
    };
    int target;
    std::cout << "Enter the number for search: " << std::endl;
    std::cin >> target;
    if (find(arr, target)) 
    {
        std::cout << "Your number is found" << std::endl;
    }
    else 
    {
        std::cout << "Your number isn't found" << std::endl;
    }

    std::cout << "\n[Exercise 2]" << std::endl;
    int ascendingArray[] = { 1, 2, 3, 4, 5 };
    int descendingArray[] = { 5, 4, 3, 2, 1 };
    bool ascendingCheck = isSorted(ascendingArray, 5, SortingDirection::ascending);
    bool descendingCheck = isSorted(descendingArray, 5, SortingDirection::descending);
    std::cout << "Ascending array sorted? " << std::boolalpha << ascendingCheck << std::endl;
    std::cout << "Descending array sorted? " << std::boolalpha << descendingCheck << std::endl;

    std::cout << "\n[Exercise 3]" << std::endl;
    traverseTopDownRightLeftByColumns(arr);

    std::cout << "\n[Exercise 4]" << std::endl;
    traverseLeftRightDownTopSwitchingByRows(arr);
}

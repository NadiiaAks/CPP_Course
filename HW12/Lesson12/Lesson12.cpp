#include <iostream>

const int rows = 3;
const int columns = 3;

enum SortingDirection { ByRows, ByColumns };

void bubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) 
        {
            if (arr[j] < pivot) 
            {
                ++i;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);

        int partition = i + 1;

        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

void sort(int arr[rows][columns], SortingDirection direction) 
{
    if (direction == ByRows) 
    {
        for (int i = 0; i < rows; i++) 
        {
            quickSort(arr[i], 0, columns - 1);
        }
    }
    else if (direction == ByColumns) 
    {
        for (int i = 0; i < columns; i++) 
        {
            int column[rows];
            for (int j = 0; j < rows; j++) 
            {
                column[j] = arr[j][i];
            }
            quickSort(column, 0, rows - 1);
            for (int j = 0; j < rows; j++) 
            {
                arr[j][i] = column[j];
            }
        }
    }
}


int main()
{
    std::cout << "[Exercise 1]" << std::endl;
    int arr[] = {8, 38, 23, 44, 92, 71, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Your array: ";
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    bubbleSort(arr, size);
    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n\n[Exercise 2]" << std::endl;
    int arr2 [rows][columns] = { {11, 2, 1}, {34, 3, 7}, {91, 18, 12} };
    std::cout << "Your Array:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    sort(arr2, ByRows);
    std::cout << "\nSorted array by rows:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    sort(arr2, ByColumns);
    std::cout << "\nSorted array by columns:\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\n[Exercise 3]" << std::endl;
    std::cout << "\nFor binarySearch it's:\nTime complexity : O(log n)\nSpace complexity : O(1)" << std::endl;
    std::cout << "\nFor all code it's:\nTime complexity :  O(20 * log(30))=O(100)\nSpace complexity : O(1)" << std::endl;

}
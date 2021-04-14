// Ch9.4Q3BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <utility>

void bubbleSort(int array[], int arrayLength)
{
    for (int endpoint{ arrayLength }; endpoint > 0; --endpoint)
    {
        bool hasSwap{ false };
        
        for (int i{ 0 }; i < (endpoint - 1); ++i)
        {
            if (array[i] > array[i + 1])
            {
                std::swap(array[i], array[i + 1]);
                hasSwap = true;
            }
        }

        if (hasSwap == false)
        { 
            std::cout << "early termination on iteration:  " << (arrayLength - endpoint + 1) << "\n";
            break;
        }
            
    }
}

void printArray(int array[], int arrayLength)
{
    for (int i{ 0 }; i < (arrayLength); ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    printArray(array, 9);

    bubbleSort(array, 9);

    printArray(array, 9);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include "header.h"
#include <iostream>
#include <cmath> 

void InputTypeElements(char& type) {
    std::cout << "Enter element type ('i', 'd', 'c'): ";
    std::cin >> type;
}

void InputSize(int32_t& size) {
    std::cout << "Enter array size: ";
    std::cin >> size;
}

bool CheckSize(int32_t size) {
    return size > 0 && size < 100;
}
int64_t MaxElement(int64_t* array, int32_t size)
{
    if (size == 0)
    {
        return -1;
    }
    int32_t MaxVal = array[0];
    int32_t MaxIndex{};
    for (int32_t i = 1; i < size; i++)
    {
        if (array[i] > MaxVal)
        {
            MaxVal = array[i];
            MaxIndex = i;
        }
    }
    return MaxIndex;
}

int64_t MinElement(int64_t* array, int32_t size)
{
    if (size == 0)
    {
        return -1;
    }
    int32_t MinVal = array[0];
    int32_t MinIndex{};
    for (int32_t i = 1; i < size; i++)
    {
        if (array[i] < MinVal)
        {
            MinVal = array[i];
            MinIndex = i;
        }
    }
    return MinIndex;
}

double CalculateAverage(int64_t* array, int32_t size)
{
    double sum{};
    int32_t count{};
    int32_t MinIndex = MinElement(array, size);
    int32_t MaxIndex = MaxElement(array, size);

    if (MinIndex == MaxIndex)
    {
        return static_cast<double>(array[MinIndex]);
    }

    if (MinIndex > MaxIndex)
    {
        std::swap(MinIndex, MaxIndex);
    }

    for (int32_t i = MinIndex + 1; i < MaxIndex; ++i)
    {
        sum += array[i];
        count++;
    }
    return sum / count;
}

bool IsSimple(int32_t number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int32_t i = 2; i < number; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}


int64_t SumOfSimpleNumbers(int64_t* array, int32_t size)
{
    int32_t sum{};
    for (int32_t i = 0; i < size; ++i)
    {
        if (IsSimple(array[i]))
        {
            sum += array[i];
        }
    }
    return sum;
}


void Task123() {
    int32_t size{};
    char type{};

    InputTypeElements(type);
    system("cls");
    std::cout << "[Block 123 (Made by A.Safronova)]\n";
    switch (type)
    {
    case 'i':
        InputSize(size);
        if (CheckSize(size))
        {
            int64_t intArray[MAX_SIZE];
            int64_t intElement{};
            std::cout << "input elements of intarray\n";
            InputArray(intArray, size);
            system("cls");
            std::cout << "intarray: ";
            PrintArray(intArray, size);
            std::cout << '\n';
            InputElement(intElement);
            std::cout << "position of element: " << FindElement(intArray, size, intElement);
            std::cout << '\n';
            std::cout << "number of elements between zero elements: " << CountElements(intArray, size);
            std::cout << '\n';
        }
        else
        {
            std::cout << "wrong size\n";
        }
        break;
    case 'd':
        InputSize(size);
        if (CheckSize(size))
        {
            double doubleArray[MAX_SIZE];
            double doubleElement{};
            std::cout << "input elements of doublearray\n";
            InputArray(doubleArray, size);
            system("cls");
            std::cout << "doublearray: ";
            PrintArray(doubleArray, size);
            std::cout << '\n';
            InputElement(doubleElement);
            std::cout << "position of element: " << FindElement(doubleArray, size, doubleElement);
            std::cout << '\n';
            std::cout << "number of elements between zero elements: " << CountElements(doubleArray, size);
            std::cout << '\n';
        }
        else
        {
            std::cout << "wrong size\n";
        }
        break;
    case 'c':
        InputSize(size);
        if (CheckSize(size))
        {
            char charArray[MAX_SIZE];
            char charElement{};
            std::cout << "input elements of chararray\n";
            InputArray(charArray, size);
            system("cls");
            std::cout << "doublearray: ";
            PrintArray(charArray, size);
            std::cout << '\n';
            InputElement(charElement);
            std::cout << "position of element: " << FindElement(charArray, size, charElement);
            std::cout << '\n';
            std::cout << "number of elements between zero elements: " << CountElements(charArray, size);
            std::cout << '\n';
        }
        else
        {
            std::cout << "wrong size\n";
        }
        break;

    default:
        std::cout << "wrong type of elements\n";
        break;
    }
}


void Task456() {
   
    int32_t size{};
    char type{};

    InputTypeElements(type);
    InputSize(size);
    if (!CheckSize(size)) {
        std::cout << "Invalid size!\n";
        return;
    }

    system("cls");
    std::cout << "[Block 456 (Made by A.Davidov)] ";
    switch (type) {
    case 'i': 
        int64_t intArray[MAX_SIZE];
        InputArray(intArray, size);
        Max_MinElementsIndex(intArray, size);
        std::cout << "Average of elements between max & min element: " << CalculateAverage(intArray, size) << '\n';
        std::cout << "Sum of all primal numbers: " << SumOfSimpleNumbers(intArray, size)<<std::endl;

    break; 
    case 'd': 
        double doubleArray[MAX_SIZE]; InputArray(doubleArray, size);
        Max_MinElementsIndex(doubleArray, size);
        break; 
    case 'c':
        char charArray[MAX_SIZE]; 
        InputArray(charArray, size);
        Max_MinElementsIndex(charArray, size);
        break; 
    default: std::cout << "Invalid type!\n";
    }
    
}

void Task789() {

    int32_t size{};
    char type{};

    InputTypeElements(type);
    InputSize(size);
    if (!CheckSize(size)) {
        std::cout << "Invalid size!\n";
        return;
    }

    system("cls");
    std::cout << "[Block 789 (Made by R.Ustinov)]\n";
    switch (type) {
    case 'i':  
        int64_t intArray[MAX_SIZE];
        int64_t TempintArray[MAX_SIZE];
        InputArray(intArray, size);
        PrintArray(intArray, size);
        CopyArray(intArray, TempintArray, size);
        BubbleSort(intArray, size);
        PrintArray(intArray, size);
        CopyArray(TempintArray, intArray, size);
        ReverseArray(intArray, size);
        PrintArray(intArray, size);
        CopyArray(TempintArray, intArray, size);
        RemoveNegative(intArray, size);
        PrintArray(intArray, size);
        break; 
    case 'd': 
        double doubleArray[MAX_SIZE];
        double TempdoubleArray[MAX_SIZE];
        InputArray(doubleArray, size);
        PrintArray(doubleArray, size);
        CopyArray(doubleArray, TempdoubleArray, size);
        BubbleSort(doubleArray, size);
        PrintArray(doubleArray, size);
        CopyArray(TempdoubleArray, doubleArray, size);
        ReverseArray(doubleArray, size);
        PrintArray(doubleArray, size);
        CopyArray(TempdoubleArray, doubleArray, size);
        RemoveNegative(doubleArray, size);
        PrintArray(doubleArray, size);
        break; 
    case 'c': 
        char charArray[MAX_SIZE]; 
        char TempcharArray[MAX_SIZE];
        InputArray(charArray, size);
        PrintArray(charArray, size);
        CopyArray(charArray, TempcharArray, size);
        BubbleSort(charArray, size);
        PrintArray(charArray, size);
        CopyArray(TempcharArray, charArray, size);
        ReverseArray(charArray, size);
        PrintArray(charArray, size);
        CopyArray(TempcharArray, charArray, size);
        RemoveNegative(charArray, size);
        PrintArray(charArray, size);
        break; 
    default: std::cout << "Invalid type!\n";
    }
    
}


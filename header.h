#ifndef HEADER
#define HEADER
 

#include <iostream>
#include <cmath> 
const int32_t MAX_SIZE{ 100 };
int32_t ChooseSort();
void InputTypeElements(char&);
void InputSize(int32_t&);
bool CheckSize(int32_t);
double CalculateAverage(int32_t*, int32_t);
bool IsSimple(int32_t);
int32_t SumOfSimpleNumbers(int32_t*, int32_t);

template <class Type>
void InputArray(Type* array, int32_t size) {
    std::cout << "Input array elements\n";
    for (size_t i{ 0 }; i < size; ++i) std::cin >> array[i];
}

template <class Type>
void PrintArray(Type* array, int32_t size) {
    for (size_t i { 0 }; i < size; ++i) std::cout << array[i] << '\t';
    std::cout << '\n';
}

template <class Type>
void InputElement(Type& element) {
    std::cout << "Input element to find: ";
    std::cin >> element;
}

template <class Type>
int32_t FindElement(Type* array, int32_t size, Type element) {

    for (int32_t i{ 0 }; i < size; ++i)

        if (array[i] == element) return i + 1;
    return -1;
}

template <class Type>
int32_t CountElements(Type* array, int32_t size) {
    int32_t first = -1, last = -1;
    for (int32_t i{ 0 }; i < size; ++i) {

        if (array[i] == 0 || array[i] == '0') {
            first = i; break;
        }
    }
    for (int32_t i = size - 1; i >= 0; --i) {
        if (array[i] == 0 || array[i] == '0') {
            last = i; break;
        }
    }
    return (first != -1 && last != -1 && last > first) ? (last - first - 1) : -1;
}

void Task123();
void Task456();
void Task789();




template <class Type>
void  BubbleSort(Type* array, int32_t size) {//ссылка на функцию для выбора сортировки (по возрастснию, по убыванию)
    int32_t sort{ ChooseSort() };
    if (sort == 1) {
        for (int32_t i{ 0 }; i < size - 1; i++) {
            for (int32_t j{ 0 }; j < size - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    std::swap(array[j], array[j + 1]);
                }
            }
        }
    }
    else {
        for (int32_t i{ 0 }; i < size - 1; i++) {
            for (int32_t j{ 0 }; j < size - i - 1; j++) {
                if (array[j] < array[j + 1]) {
                    std::swap(array[j], array[j + 1]);
                }
            }
        }
    }
    std::cout << "Array was sorted\n";
}

template <class Type>
void  ReverseArray(Type* array, int32_t size) {
   
        for (int32_t i{ 0 }; i < (size / 2); i++) {
            std::swap(array[i], array[size - i - 1]);
        }
    std::cout << "Array was reversed\n";
}

template <class Type>
void CopyArray(Type* array1, Type*array2,int32_t size) {
    for (int32_t i{ 0 }; i < size; i++) {
        array2[i] = array1[i];
   }
}

template <class Type>
void  RemoveNegative(Type* array, int32_t size) {
    Type arraysecond[MAX_SIZE];
    int32_t j{ 0 };
    for (int32_t i{ 0 }; i < size; i++) {
        if (array[i] >= 0) {
            arraysecond[j] = array[i];
            j++;
        }
    }
    for (int32_t i{ 0 }; i < size - j; i++) {
        arraysecond[i + j] = 0;
    }
    CopyArray(arraysecond, array,size);
    std::cout << "Negative elements was removed (if they was)\n";
}

template <class Type>
void Max_MinElementsIndex(Type* array, int32_t size) {
    Type maxIndex{};
    Type minIndex{};
    if (size == 0)
    {
        std::cout << "-1\n";
    }
    else {
        Type maxVal = array[0];

        for (int32_t i{ 1 }; i < size; i++)
        {
            if (array[i] > maxVal)
            {
                maxVal = array[i];
                maxIndex = i;
            }
        }


        Type minVal = array[0];

        for (int32_t i{ 1 }; i < size; i++)
        {
            if (array[i] < minVal)
            {
                minVal = array[i];
                minIndex = i;
            }
        }

    }
    std::cout << "Min index is " << minIndex+1 << " and Max index is " << maxIndex+1 << std::endl;
}

#endif
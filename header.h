#pragma once
#include <iostream>
const int32_t MAX_SIZE = 100;
void InputTypeElements(char&);
void InputSize(int32_t&);
bool CheckSize(int32_t);

template <class Type>
void InputArray(Type* array, int32_t size) {
    std::cout << "Input array elements\n";
    for (size_t i = 0; i < size; ++i) std::cin >> array[i];
}

template <class Type>
void PrintArray(Type* array, int32_t size) {
    for (size_t i = 0; i < size; ++i) std::cout << array[i] << '\t';
    std::cout << '\n';
}

template <class Type>
void InputElement(Type& element) {
    std::cout << "Input element to find: ";
    std::cin >> element;
}

template <class Type>
int32_t FindElement(Type* array, int32_t size, Type element) {
    for (int32_t i = 0; i < size; ++i)
        if (array[i] == element) return i + 1;
    return -1;
}

template <class Type>
int32_t CountElements(Type* array, int32_t size) {
    int32_t first = -1, last = -1;
    for (int32_t i = 0; i < size; ++i) {
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
void  BubbleSort(Type* array, int32_t size) {
    for (int32_t i{ 0 }; i < size-1; i++) {
        for (int32_t j{ 0 }; j < size-i-1; j++) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
    std::cout << "Array was sorted\n";
}

template <class Type>
void  ReverseArray(Type* array, int32_t size) {
    if (size % 2) {
        for (int32_t i{ 0 }; i < (size / 2); i++) {
            std::swap(array[i], array[size - i - 1]);
        }
    }
    else {
        for (int32_t i{ 0 }; i <= ((size / 2)-1); i++) {
            std::swap(array[i], array[size - i - 1]);
        }
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
    for (int32_t i{ 0 }; i < size; i++) {
        if (array[i] < 0) {
            array[i] = 0;
            for (int32_t j{ i }; j < size-1; j++) {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
    std::cout << "Negative elements was removed (if they was)\n";
}

template <>
inline void RemoveNegative(char* array, int32_t size) {
    for (int32_t i{ 0 }; i < size; i++) {
        if (array[i] == '-') {
            array[i] = '0';
            for (int32_t j{ i }; j < size - 1; j++) {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
    std::cout << "Negative elements was removed (if they was)\n";
}
#ifndef HEADER
#define HEADER

#include <iostream>

void InputTypeElements(char&);
void InputSize(int32_t&);
bool CheckSize(int32_t);

template <class Type>
void InputArray(Type* array, int32_t size)
{
	for (size_t i{}; i < size; ++i)
	{
		std::cin >> array[i];
	}
}

template <class Type>
void PrintArray(Type* array, int32_t size)
{
	for (size_t i{}; i < size; ++i)
	{
		std::cout << array[i] << '\t';
	}
}

template <class Type>
void InputElement(Type& element)
{
	std::cout << "input element you want to find in the array\n";
	std::cin >> element;
}

template <class Type>
int32_t FindElement(Type* array, int32_t size, Type element)
{
	int32_t position{ -1 };

	for (size_t i{}; i < size; ++i)
	{
		if (array[i] == element)
		{
			position = i + 1;
		}
	}
	return position;
}

template <class Type>
int32_t CountElements(Type* array, int32_t size)
{
	int32_t indexFirst{};
	int32_t indexLast{};
	for (int32_t i{}; i < size; ++i)
	{
		if (array[i] == 0 || array[i] == '0')
		{
			if (indexFirst == 0)
			{
				indexFirst = i;
			}
			indexLast = i;
		}
	}
	if (indexFirst != 0 && indexLast != 0)
	{
		return indexLast - indexFirst - 1;
	}
	return -1;
}

#endif
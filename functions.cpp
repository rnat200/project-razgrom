#include "header.h"
#include <iostream>

void InputTypeElements(char& typeElements)
{
	std::cout << "input type of elements 'i' - int, 'd' - double, 'c' - char" << '\n';
	std::cin >> typeElements;
}


void InputSize(int32_t& size)
{
	std::cout << "input size of array\n";
	std::cin >> size;
}


bool CheckSize(int32_t size)
{
	return 0 < size < 100;
}
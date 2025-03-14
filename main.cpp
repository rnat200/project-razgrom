#include "header.h"
#include <iostream>

int main() 
{
	const int32_t MAX_SIZE = 100;
	int64_t intArray[MAX_SIZE];
	double doubleArray[MAX_SIZE];
	char charArray[MAX_SIZE];

	int32_t size{};

	int64_t intElement{};
	double doubleElement{};
	char charElement{};

	char typeElements{};
	InputTypeElements(typeElements);
	switch (typeElements)
	{
	case 'i':
		InputSize(size);
		if (CheckSize(size))
		{
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
	system("pause");
	return 0;
}
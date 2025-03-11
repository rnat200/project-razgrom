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
			indexFirst = i;
			break;
		}
	}
	for (int32_t i{ size - 1 }; i >= 0; --i)
	{
		if (array[i] == 0 || array[i] == '0')
		{
			indexLast = i;
			break;
		}
	}
	return indexLast - indexFirst - 1;
}

int main() {
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

	}
	system("pause");
	return 0;
}


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
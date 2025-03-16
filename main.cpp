#include "header.h"
#include <iostream>

int main() {
    int32_t choice{};
    do {
        system("cls");
        std::cout << "Select task block:\n1. Block 123\n2. Block 456\n3. Block 789\n0. Exit\n";
        std::cin >> choice;
        switch (choice) {
        case 1: Task123(); break;
        case 2: Task456(); break;
        case 3: Task789(); break;
        case 0: break;
        default: std::cout << "Invalid choice!\n";
        }
        if (choice != 0) system("pause");
    } while (choice != 0);
    return 0;
}
#include <iostream>

int main() {
    char inputSym;

    std::cout << "Enter any symbol" << std::endl;
    std::cin >> inputSym;

    int inputSymCode = (int)inputSym;

    if (inputSymCode >= 65 && inputSymCode <= 90) {
        std::cout << "Upper case";
    }
    else if (inputSymCode >= 97 && inputSymCode <= 122) {
        std::cout << "Lower case";
    }
    else if (inputSymCode >= 48 && inputSymCode <= 57) {
        std::cout << "Number";
    }
    else {
        std::cout << "Special";
    }

    return 0;
}

#include <iostream>


int getFactorial(int num) {
    int result = 1;
    for (int i = 0; i < num; i++) {
        result = result * (i + 1);
    }
    return result;
}

int main() {
    int inputNum = 0;
    std::cout << "Enter a number: ";
    std::cin >> inputNum;
    std::cout << "\nResult: " << getFactorial(inputNum) << "\n";
    return 0;
}


#include <iostream>
#include <Windows.h>

float inputValue() {
    float value{};
    std::cout << "Input a value:\n";
    std::cin >> value;
    return value;
}

void calcAnswer(int Operator, float firstVal, float secVal, float& finalVal) {
    if (Operator == 1) {
        finalVal = firstVal * secVal;
    }
    else if (Operator == 2) {
        finalVal = firstVal / secVal;
    }
    else if (Operator == 3) {
        finalVal = firstVal + secVal;
    }
    else if (Operator == 4) {
        finalVal = firstVal - secVal;
    }
}

int main() {
    SetConsoleTitle(L"Ivan's Calculator");

    float firstVal{ inputValue() };
    std::cout << "\nChoose one(1,2,3,4):\n1. Multiply\n2. Divide\n3. Add\n4. Subtract\n" << std::endl;

    int Operator{};
    std::cin >> Operator;
    float secVal{ inputValue() };

    float finalVal{};
    calcAnswer(Operator, firstVal, secVal, finalVal);
    std::cout << "Solution: " << finalVal << std::endl;

    return 0;
}

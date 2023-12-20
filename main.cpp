#include <iostream>
#include <Windows.h>
using namespace std;

float inputValue() {
    float value{};
    cout << "Input a value:\n";
    cin >> value;
    return value;
}

int main() {
    SetConsoleTitle(L"Calculator");

    bool exitProgram = false;
    float finalVal;

    do {
        float firstVal = inputValue();
        cout << "\nChoose an operator (1,2,3,4):\n1. Multiply\n2. Divide\n3. Add\n4. Subtract\n" << endl;
        int Operator{};
        cin >> Operator;
      
        float secVal = inputValue();

        switch (Operator) {
        case 1:
            finalVal = firstVal * secVal;
            break;

        case 2:
            finalVal = firstVal / secVal;
            break;

        case 3:
            finalVal = firstVal + secVal;
            break;

        case 4:
            finalVal = firstVal - secVal;
            break;
        default:
            cout << "Enter a valid operator. (1-4)\n";
            return Operator;
        }
        
        cout << "Solution: " << finalVal << endl;
    
        cout << "Do you want to perform another calculation? (1 for Yes, 0 for No): ";
        cin >> exitProgram;
       
    } while (exitProgram);

    return 0;
}

#include "functions.cpp"

int main() {
    while (true) {
        string type = TypeOfCalculator();
        if (type == "standart calculator") {
            const Operation operation = askForOperation();
            if (operation == Exit) {
                exit(0);
            }
            double result;
            if (isUnary(operation)) {
                const int x = askForNumber();
                result = applyUnaryOperation(operation, x);
            }
            else {
                const int a = askForNumber();
                const int b = askForNumber();
                result = applyBinaryOperation(operation, a, b);
            }
            printResult(result);
        }
        else if (type == "sorting") {
            CreatingSortingMassive();
        }
        else if (type == "binary view") {
            DecToBinary();
        }
        else if (type == "exit") {
            exit(0);
        }
    }
    return 0;
}
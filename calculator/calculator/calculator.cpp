﻿#include <iostream>
#include "functions.h"   
#include<cmath>

Operation askForOperation(string);
int askForNumber();
bool isUnary(Operation);
int applyUnaryOperation(Operation, int x);
int applyBinaryOperation(Operation, int a, int b);
void printResult(int res);

int main() {
    while (true) {
        const Operation operation = askForOperation();
        if (operation == Exit) {
            exit(0);
        }
        int result;
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
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

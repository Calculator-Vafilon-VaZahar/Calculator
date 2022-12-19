#include "functions.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
Art AskForArtOfOperation() {
    int art_of_operation;
    cout << "Choose the art of operation";
    cout << "1 - Arithmetics" << endl << "2 - Trigonometry"<< endl << "3 - Binary" << endl <<
         "4 - Programmer" << endl << "5 - Science" << endl;
    cin >> art_of_operation;
    switch (art_of_operation) {
        case 1:
            return Art::Arithmetical;
            break;
        case 2:
            return Art::Trigonometry;
            break;
        case 3:
            return Art::Binary;
            break;
        case 4:
            return Art::Programmer;
            break;
        case 5:
            return Art::Science;
            break;
        case 0:
            return Art::Exit0;
            break;
    }
    return Art::Exit0;

}
Operation askForOperation() {
    int num_of_operation;
    cout << "Choose the operation: " << endl;
    cout << "1 - Add" << endl;
    cout << "2 - Subtract" << endl;
    cout << "3 - Multiply" << endl;
    cout << "4 - Divide" << endl;
    cout << "5 - Unary_minus" << endl;
    cout << "6 - Exp" << endl;
    cout << "7 - Log" << endl;
    cout << "8 - Sqrt" << endl;
    cout << "9 - Pow" << endl;
    cout << "10 - Remainder" << endl;
    cout << "11 - unary_plus" << endl;
    cout << "0 - exit" << endl;
    cin >> num_of_operation;
    while (cin.fail() || num_of_operation < 0 || num_of_operation > 13) {
        cin.clear();
        cin.ignore();
        cout << "enter the number of operation(1-13):  ";
        cin >> num_of_operation;
    }
    switch (num_of_operation) {
        case 1: return Operation::add;
            break;
        case 2: return Operation::subtract;
            break;
        case 3: return Operation::multiply;
            break;
        case 4: return Operation::divide;
            break;
        case 5: return Operation::unary_minus;
            break;
        case 6: return Operation::Exp;
            break;
        case 7: return Operation::Log;
            break;
        case 8: return Operation::Sqrt;
            break;
        case 9: return Operation::Pow;
            break;
        case 10: return Operation::Remainder;
            break;
        case 11: return Operation::unary_plus;
            break;
        case 0: return Operation::Exit1;
            break;
    }
    return Operation::Exit1;
}


bool isUnary(Operation oper) {
    if (oper == Exp || oper == Sqrt || oper == Log || oper == unary_minus || oper == unary_plus) {
        return true;
    }
    return false;
}


int askForNumber() {
    int num;
    cout << "enter num: ";
    cin >> num;
    return num;
}


int Unary_minus(int a) {
    return -a;
}

int Unary_plus(int a) {
    return a;
}


int applyUnaryOperation(Operation oper, int x) {
    switch (oper) {
        case Operation::Exp: return exp(x);
            break;
        case Operation::Sqrt: return sqrt(x);
            break;
        case Operation::Log: return log(x);
            break;
        case Operation::unary_minus: return Unary_minus(x);
            break;
        case Operation::unary_plus: return Unary_plus(x);
    }
    return 0;
}

double Sum(double a, double b){
    return a + b;
}

double Sub(double a, double b) {
    return a - b;
}

double Mult(double a, double b) {
    return a * b;
}

double Div(double a, double b) {
    try {
        if (b == 0) {
            throw 1;
        }
    }
    catch (int exc) {
        if (exc == 1) {
            cout << "ERROR. Dividing by 0!!!";
            return 0;
        }
    }
    return a / b;
}

int Mod(int a, int b) {
    try {
        if (b == 0) {
            throw 1;
        }
    }
    catch (int exc) {
        if (exc == 1) {
            cout << "ERROR. Dividing by 0!!!";
        }
    }
    return a % b;
}

int applyBinaryOperation(Operation oper,int a,int b) {
    switch (oper) {
        case Operation::subtract: return Sub(a, b);
            break;
        case Operation::multiply: return Mult(a, b);
            break;
        case Operation::Pow: return pow(a,b);
            break;
        case Operation::divide: return Div(a, b);
            break;
        case Operation::add: return Sum(a, b);
            break;
        case Operation::Remainder: return Mod(a, b);
            break;
    }
    return 0;
}


void printResult(int res) {
    cout << res << endl;
}
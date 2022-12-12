#include "functions.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

Operation askForOperation() {
	int num_of_operation;
	cout << "choose the operation:" << endl;
	cout << "1-add" << endl;
	cout << "2 - substract" << endl;
	cout << "3 - multiply" << endl;
	cout << "4 - divide" << endl; 
	cout << "5 - unary_minus" << endl;
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
	case 2: return Operation::substract;
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
	case 0: return Operation::Exit;
		break;
	}
	return Operation::Exit;
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

int Sum(int a, int b) {
	return a + b;
}

int Sub(int a, int b) {
	return a - b;
}

int Mult(int a, int b) {
	return a * b;
}

int Div(int a, int b) {
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
	case Operation::substract: return Sub(a, b);
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
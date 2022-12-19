#include <iostream>
#include <cmath>

using namespace std;
enum Art{
    Arithmetical = 1,
    Trigonometry = 2,
    Binary = 3,
    Programmer = 4,
    Science = 5,
    Exit0 = 0,
};
enum Operation {
	add = 1,
	subtract = 2,
	multiply = 3,
	divide = 4, 
	Exp = 6,
	Log = 7,
	Sqrt = 8,
	Pow = 9,
	Exit1 = 0,
	Remainder = 10,
	unary_plus = 11,
	unary_minus = 5,
};
// arithmetical functions
double Sum(double a, double b);
double Sub(double a, double b);
double Mult(double a, double b);
double Div(double a, double b);
int Mod(int a, int b);
double Root(double a, double b);
double Power(double a, double b);
Operation askForOperation();
bool isUnary(Operation);
int askForNumber();
int applyUnaryOperation(Operation oper, int x);
int applyBinaryOperation(Operation oper, int a, int b);
void printResult(int res);
int Unary_minus(int a);
int Unary_plus(int a);
Art AskForArtOfOperation();
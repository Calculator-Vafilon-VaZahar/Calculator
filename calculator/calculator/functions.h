using namespace std;

enum Operation {
	add = 1,
	substract = 2,
	multiply = 3,
	divide = 4, 
	Exp = 6,
	Log = 7,
	Sqrt = 8,
	Pow = 9,
	Exit = 0,
	Remainder = 10,
	unary_plus = 11,
	unary_minus = 5,
};

Operation askForOperation();
bool isUnary(Operation);
int askForNumber();
int applyUnaryOperation(Operation oper, int x);
int applyBinaryOperation(Operation oper, int a, int b);
void printResult(int res);
int Mult(int a, int b);
int Sub(int a, int b);
int Div(int a, int b);
int Mod(int a, int b);
int Sum(int a, int b);
int Unary_minus(int a);
int Unary_plus(int a);

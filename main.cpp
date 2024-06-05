#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int* p1, * p2;
	char op;
	int result;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	p1 = &num1;
	p2 = &num2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;
	switch (op) {
	case '+':
		result = *p1 + *p2;
		break;
	case '-':
		result = *p1 - *p2;
		break;
	case '*':
		result = *p1 * *p2;
		break;
	case '/':
		result = *p1 / *p2;
		break;
	}
	cout << "Result: " << result << endl;
	return 0;
}
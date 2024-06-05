#include <iostream>
using namespace std;

int main() {
	int num1 = 0;
	int num2 = 0;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	if (*ptr1 > *ptr2) {
		cout << "The larger number is: " << *ptr1 << endl;
	}
	else {
		cout << "The larger number is: " << *ptr2 << endl;
	}

	return 0;
}
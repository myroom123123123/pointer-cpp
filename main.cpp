#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
	int* arr = new int[SIZE];
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }
    int* ptr_start = arr;
    int* ptr_end = arr + SIZE - 1;
    while (ptr_start < ptr_end) {
        int temp = *ptr_start;
        *ptr_start = *ptr_end;
        *ptr_end = temp;
        ptr_start++;
        ptr_end--;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
	delete[] arr;
    return 0;
}


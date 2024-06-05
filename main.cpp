#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE];
    int arr2[SIZE];
    cout << "Enter " << SIZE << " integers for Array 1:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr1[i];
    }
    int* ptr1 = arr1;
    int* ptr2 = arr2;
    for (int i = 0; i < SIZE; ++i) {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }
    cout << "Array 1: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Array 2 (copied from Array 1): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

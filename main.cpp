#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int sum = 0;
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }
    int* ptr = arr;
    for (int i = 0; i < SIZE; ++i) {
        sum += *ptr;
        ptr++;
    }
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}

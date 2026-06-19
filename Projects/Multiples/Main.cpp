#include <iostream>

using namespace std;

int main() {

    cout << "Mazrab 4 Dar 1 Ta 80 Reverse:" << endl;

    for (int i = 80; i >= 1; i -= 4) {
        cout << i << " ";
    }

    cout << endl;

    int size = 80;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    cout << "Mazrab 4 Dar 1 Ta 80 Reverse:" << endl;

    for (int i = size - 1; i >= 0; i--) {

        if (arr[i] % 4 == 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}

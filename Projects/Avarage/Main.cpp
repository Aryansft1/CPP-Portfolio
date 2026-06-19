#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter Count of Numbers :";
    cin >> n;

    if (n <= 0) {
        cout << "Numbers must more than zero." << endl;
        return 1;
    }

    int* arr = new int[n];
    double sum = 0;

    cout << "Enter Numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;

    cout << "Average: " << average << endl;
    cout << "More Than Average:" << endl;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] > average) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "NOT FOUND!!." << endl;
    }

    cout << endl;

    return 0;
}

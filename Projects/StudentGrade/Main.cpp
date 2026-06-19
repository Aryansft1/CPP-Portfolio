#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score;
};

void plus2(Student &s) {
    if (s.score < 10) {
        s.score += 2;
    }
}

int main() {

    int n;

    cout << "Count Of Students : ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {

        cout << "Student Info : " << (i + 1) << " ---" << endl;

        cout << "Name: ";
        cin >> students[i].name;

        cout << "Grade: ";
        cin >> students[i].score;
    }

    for (int i = 0; i < n; i++) {
        plus2(students[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << "Name: "
             << students[i].name
             << " Final Grade: "
             << students[i].score
             << endl;
    }

    return 0;
}

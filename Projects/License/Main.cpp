#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    int n;

    cout << "Enter number of people: ";
    cin >> n;

    Person people[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of person " << i + 1 << ": ";
        cin >> people[i].name;

        cout << "Enter age of person " << i + 1 << ": ";
        cin >> people[i].age;
    }

    cout << "\nPeople older than 18:\n";
    for (int i = 0; i < n; i++) {
        if (people[i].age >= 18) {
            cout << "Name: " << people[i].name
                 << ", Age: " << people[i].age << endl;
        }
    }

    return 0;
}

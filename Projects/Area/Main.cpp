#include <iostream>

using namespace std;

struct Rectangle {
    double length;
    double width;
};

void calculateArea(Rectangle rect) {

    double area = rect.length * rect.width;

    cout << "Area : "
         << area
         << endl;
}

int main() {

    Rectangle rect;

    cout << "Enter Length : ";
    cin >> rect.length;

    cout << "Enter Width : ";
    cin >> rect.width;

    calculateArea(rect);

    return 0;
}

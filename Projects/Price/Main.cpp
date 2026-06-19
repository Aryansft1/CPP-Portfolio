#include <iostream>
#include <string>

using namespace std;


struct Product {
    string name;
    double price;
};


double calcavg(Product products[], int size) {
    if (size == 0) {
        return 0;  
    }

    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += products[i].price;
    }

    return sum / size;
}

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product products[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name of product " << i + 1 << ": ";
        cin >> products[i].name;

        cout << "Enter price of product " << i + 1 << ": ";
        cin >> products[i].price;
    }

    double average = calcavg(products, n);

    cout << "Average price: " << average << endl;

    return 0;
}

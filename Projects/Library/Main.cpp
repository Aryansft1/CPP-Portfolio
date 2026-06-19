#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int pages;
};

Book findBookWithMostPages(Book books[], int size) {
    if (size <= 0) {
        return {"", "", 0};
    }

    Book bookWithMostPages = books[0];
    for (int i = 1; i < size; ++i) {
        if (books[i].pages > bookWithMostPages.pages) {
            bookWithMostPages = books[i];
        }
    }
    return bookWithMostPages;
}

int main() {
    const int n = 3;
    Book library[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter title of book " << i+1 << ": ";
        getline(cin, library[i].title);

        cout << "Enter author of book " << i+1 << ": ";
        getline(cin, library[i].author);

        cout << "Enter number of pages of book " << i+1 << ": ";
        cin >> library[i].pages;
        cin.ignore();
    }

    Book longestBook = findBookWithMostPages(library, n);

    cout << "\nBook with the most pages:\n";
    cout << "Title: " << longestBook.title << endl;
    cout << "Author: " << longestBook.author << endl;
    cout << "Pages: " << longestBook.pages << endl;

    return 0;
}

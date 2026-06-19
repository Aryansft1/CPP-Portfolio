#include <iostream>
#include <vector>
using namespace std;

struct Book
{
    string name;
    string author;
    int pages;
};

int main()
{
    vector<Book> books;
    char choice;

    do
    {
        Book b;

        cout << "Book name: ";
        cin >> b.name;

        cout << "Author: ";
        cin >> b.author;

        cout << "Pages: ";
        cin >> b.pages;

        books.push_back(b);

        cout << "Add another book? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nAll Books:\n";

    for (int i = 0; i < books.size(); i++)
    {
        cout << "Name: " << books[i].name << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Pages: " << books[i].pages << endl;
        cout << endl;
    }

    int maxIndex = 0;

    for (int i = 1; i < books.size(); i++)
    {
        if (books[i].pages > books[maxIndex].pages)
        {
            maxIndex = i;
        }
    }

    cout << "Book With Most Pages:\n";
    cout << "Name: " << books[maxIndex].name << endl;
    cout << "Author: " << books[maxIndex].author << endl;
    cout << "Pages: " << books[maxIndex].pages << endl;

    return 0;
}

#include <iostream>
using namespace std;
class Book
{
    int bookID;
    string title;
    string author;
    int price;

public:
    void input()
    {
        cout << "enter the bookID: ";
        cin >> bookID;
        cout << "enter the title: ";
        cin >> title;
        cout << "enter the author: ";
        cin >> author;
        cout << "enter the price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Book Detailed are: ";
        cout << "Book Id: " << bookID << endl;
        cout << "title is: " << title << endl;
        cout << "author is : " << author << endl;
        cout << "price is : " << price << endl;
    }
};
int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    Book b1[n];

    for (int i = 0; i < n; i++)
    {
        b1[i].input();
        b1[i].display();
    }
}

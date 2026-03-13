#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the a : ";
    cin >> a; // 5
    cout << "enter the a : ";
    cin >> b; // 7

    a = a * b; // 5 + 7 =12    // +
    b = a / b; // 12 -7 = 5    // -
    a = a / b; // 12 -5 = 7    // -

    cout << "After swapping : ";
    cout << a << endl;
    cout << b << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n; // 5

    int a = 0;
    int b = 1;
    int c;

    for (int i = 0; i <= n; i++)
    {
        cout << a << " "; // 0  1  2  3  4
        c = a + b;        // 0 + 1= 1/ 1+1= 2 / 2 + 1= 3 / 4 + 1= 5
        a = b;            // 1  /1  /2 //1
        b = c;            // 1  /2  //1  5
    }
    cout << endl;
} // 0 1 1 2 3 5

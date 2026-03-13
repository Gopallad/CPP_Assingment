#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        num = num / 10; // remove last digit
        count++;        // increase count
    }

    cout << "Number of digits = " << count;

    return 0;
}
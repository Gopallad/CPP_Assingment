// Q.
// Write a function to calculate the sum of two numbers using default arguments.

// Example

// add(int a=10, int b=20)

// Call function with :

// add()
// add(50)
// add(10,20)
#include <iostream>
using namespace std;

int add(int a = 10, int b = 20)
{
    return a + b;
}

int main()
{
    cout << add() << endl;
    cout << add(50) << endl;
    cout << add(0, 20) << endl;

    return 0;
}
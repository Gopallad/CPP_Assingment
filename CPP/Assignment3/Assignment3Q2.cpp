// Q.
// Write a C++ program to find the largest element in an array.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {22, 34, 31, 56, 75};
    int large = arr[0];

    for (int i = 0; i < arr[i]; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << "largest number is " << large;
}


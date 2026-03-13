#include <iostream>
using namespace std;

// function to check balance
void checkBalance(float balance)
{
    cout << "Current Balance = " << balance << endl;
}

// function to deposit money
void deposit(float &balance)
{
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    balance = balance + amount;
    cout << "Money Deposited Successfully\n";
}

// function to withdraw money
void withdraw(float &balance)
{
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= balance)
    {
        balance = balance - amount;
        cout << "Money Withdrawn Successfully\n";
    }
    else
    {
        cout << "Insufficient Balance\n";
    }
}

int main()
{
    int choice;
    float balance = 1000;

    while (true) // infinite loop until user exits
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
            checkBalance(balance);

        else if (choice == 2)
            deposit(balance);

        else if (choice == 3)
            withdraw(balance);

        else if (choice == 4)
        {
            cout << "Thank you!\n";
            break;
        }

        else
            cout << "Invalid Choice\n";
    }

    return 0;
}
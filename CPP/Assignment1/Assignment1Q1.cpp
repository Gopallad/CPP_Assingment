#include <iostream>
using namespace std;

class student
{

    int roll;
    string dob;
    float marks;

public:
    student()
    {
        roll = 0;
        dob = "";
        marks = 0;
    }
    student(int r, string d, float m)
    {

        roll = r;
        dob = d;
        marks = m;
    }
    void display()
    {
        cout << "Roll no: " << roll << endl;
        cout << "Date of birth: " << dob << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    student s[10];
    int roll;
    string dob;
    float marks;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter details of student " << i + 1 << endl;
        cout << "Roll No:";
        cin >> roll;
        cout << "Date of birth:";
        cin >> dob;
        cout << "Marks:";
        cin >> marks;

        s[i] = student(roll, dob, marks);
    }
    cout << "\nStudent Details:\n";

    for (int i = 0; i < 10; i++)
    {
        s[i].display();
    }
    return 0;
}
// Q. Write a student class and use it in your program. Store the data of 10 students and display the data according to their roll numbers, dates of birth, and total marks.

// Implement concepts such as :
// -Classes and Objects
// -Constructors
// -Parameterized constructors
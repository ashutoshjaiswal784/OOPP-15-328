#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Student Details";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    void calculateGrade()
    {
        if (marks >= 90)
            cout << "Grade: A+" << endl;
        else if (marks >= 80)
            cout << "Grade: A" << endl;
        else if (marks >= 70)
            cout << "Grade: B" << endl;
        else if (marks >= 60)
            cout << "Grade: C" << endl;
        else if (marks >= 50)
            cout << "Grade: D" << endl;
        else
            cout << "Grade: F" << endl;
    }
};

int main()
{
    Student s1;     
    s1.input();     
    s1.display();  
    s1.calculateGrade();

    return 0;
}
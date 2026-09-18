// wap to a input for any student like name branch ,roll no and marks of five subject find out the total and percenage of marks wwith the help of modular programming
//->modualar programminng means using functions 
#include <iostream>
#include <string>
using namespace std;

string name, branch;
int roll;
float marks[5], total = 0, percentage;

void input() {
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Branch: ";
    getline(cin, branch);

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
        cin >> marks[i];
}

void calculate() {
    total = 0;
    for (int i = 0; i < 5; i++)
        total += marks[i];

    percentage = total / 5;
}


void display() {
    cout << "Name: " << name<<endl;     
    cout << "Branch: " << branch<<endl;
    cout << "Roll No: " << roll<<endl;
    cout << "Total Marks: " << total<<endl;
    cout << "Percentage: " << percentage << "%"<<endl;
}

int main() {
    input();
    calculate();
    display();
    return 0;
}
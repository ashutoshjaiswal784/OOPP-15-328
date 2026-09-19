//Create a variable salary, assign a value, create a pointer newSalary to store the address of salary, update salary by 10% using the pointer, and show the value of salary from the old variable.
#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;
    float *newSalary = &salary;
    *newSalary = *newSalary + (*newSalary * 0.10);
    cout << "Salary = " << salary << endl;

    return 0;
}
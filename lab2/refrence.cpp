//Create a variable salary, assign a value, create another reference variable newSalary that stores the reference of salary, update salary by 10%, and show the value of salary from the old variable.
#include <iostream>
using namespace std;

int main()
{
    float salary = 50000;
    float &newSalary = salary;
    newSalary = newSalary + (newSalary * 0.10);
    cout << "Salary = " << salary << endl;

    return 0;
}
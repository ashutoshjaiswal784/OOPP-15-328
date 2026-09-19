//Write programs 5 and 6 with the help of functions. The functions should update the value, while printing should be done in the main() method.
#include <iostream>
using namespace std;
void updateSalary(float *salary)
{
    *salary = *salary + (*salary * 0.10);
}

int main()
{
    float salary = 50000;

    updateSalary(&salary);

    cout << "Updated Salary = " << salary << endl;

    return 0;
}
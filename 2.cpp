#include <iostream>
using namespace std;
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping (Call by Value): ";
    cout << "a = " << a << ", b = " << b << endl;
}
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (Call by Reference): ";
    cout << "a = " << a << ", b = " << b << endl;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Original values: ";
    cout << "x = " << x << ", y = " << y << endl;

  
    swapValue(x, y);
    cout << "After function call (Main): ";
    cout << "x = " << x << ", y = " << y << endl;

    
    swapReference(x, y);
    cout << "After function call (Main): ";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
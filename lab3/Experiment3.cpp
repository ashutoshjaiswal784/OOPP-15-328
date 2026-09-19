#include <iostream>
using namespace std;
inline int square(int x)
{
    return x * x;
}

int power(int x, int n = 2)
{
    int result = 1;

    for(int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    return result;
}

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
  
    cout << "Square of 5 = " << square(5) << endl;
    cout << "Power of 4 = " << power(4) << endl;
    cout << "4 raised to 3 = " << power(4, 3) << endl;
    cout << "Addition of 10 and 20 = " << add(10, 20) << endl;
    cout << "Addition of 2.5 and 3.5 = " << add(2.5f, 3.5f) << endl;
    cout << "Addition of 10, 20 and 30 = " << add(10, 20, 30) << endl;

    return 0;
}
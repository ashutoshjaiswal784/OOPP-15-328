#include <iostream>
using namespace std;
class Calculator {
public:
    inline int square(int n) {
        return n * n;
    }
    int add(int a, int b = 0) {
        return a + b;
    }
    int multiply(int a, int b) {
        return a * b;
    }

   double multiply(double a, double b) {
        return a * b;
    }
};

int main() {
    Calculator c;
    cout << "Square of 5 = " << c.square(5) << endl;

        cout << "Addition of 10 and 20 = "
         << c.add(10, 20) << endl;

    cout << "Addition using default argument = "
         << c.add(10) << endl;

    cout << "Multiplication of integers = "
         << c.multiply(5, 4) << endl;

cout << "Multiplication of decimal numbers = "
         << c.multiply(2.5, 3.0) << endl;

    return 0;
}
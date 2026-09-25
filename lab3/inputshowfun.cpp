#include <iostream>
using namespace std;
class Number {
    int a, b;
public:
    void input();
    void show();
};
void Number::input() {
    cout << "Enter value of a (enter 0 if no value)";
    cin >> a;

    cout << "Enter value of b (enter 0 if no value)";
    cin >> b;
}

void Number::show() {
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
}
int main() {
    Number n;

      n.input();
    n.show();

       return 0;
}
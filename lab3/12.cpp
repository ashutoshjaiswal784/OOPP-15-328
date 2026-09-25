#include <iostream>
using namespace std;
class Area {
public:
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
    double area(double length, double width) {
        return length * width;
    }
    double area(int side) {
        return side * side;
    }
    double area(double base, double height, bool triangle) {
        return 0.5 * base * height;
    }
};
int main() {
    Area a;
    double radius, length, width, base, height;
    int side;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << a.area(radius) << endl;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Area of Rectangle = "
         << a.area(length, width) << endl;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square = "
         << a.area(side) << endl;

    cout << "Enter base of triangle: ";
    cin >> base;
  cout << "Enter height of triangle: ";
    cin >> height;
       cout << "Area of Triangle = "
         << a.area(base, height, true) << endl;

    return 0;
}
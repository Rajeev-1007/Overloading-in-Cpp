#include <iostream>
using namespace std;

class Area {
public:
    int calc(int side) {
        return side * side;
    }
    int calc(int length, int width) {
        return length * width;
    }
    float calc(float radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;
    int side, length, width;
    float radius;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    cout << "Enter radius of circle: ";
    cin >> radius;
    
    cout << endl;
    cout << "Areas:" << endl;
    cout << "Square area = " << a.calc(side) << endl;
    cout << "Rectangle area = " << a.calc(length, width) << endl;
    cout << "Circle area = " << a.calc(radius) << endl;

    return 0;
}
=== Code Execution Successful ===

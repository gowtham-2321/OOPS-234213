#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    // Constructor is created
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the * operator for scalar multiplication
    Vector operator*(int scalar) {
        return Vector(x * scalar, y * scalar);
    }

    void display(){
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(2, 3);
    Vector v2 = v1 * 4;  // Multiplying vector by scalar
    v2.display();
    return 0;
}

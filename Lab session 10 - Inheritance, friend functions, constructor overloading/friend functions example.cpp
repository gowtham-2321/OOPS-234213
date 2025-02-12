#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    //constructor declaration
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Declare friend function for the class Box
    friend double calculateVolume(Box b);
};

// Friend function definition
double calculateVolume(Box b) {
    // Allowed to access private members, though the vairables were in private, friend function can access them
    return b.length * b.width * b.height;
}

int main() {
    Box box1(5.0, 4.0, 3.0);

    // Calculate and display the volume using the friend function
    cout << "Volume of the box: " << calculateVolume(box1) << " cubic units" << endl;

    return 0;
}

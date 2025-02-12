#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/

using namespace std;

// SINGLE INHERITANCE
class Animal {
public:
    Animal() {
        cout << "This is an Animal" << endl;
    }
};

class Dog : public Animal {  // Single Inheritance
public:
    Dog() {
        cout << "Yay! that too its a DOG" << endl;
    }
};

// MULTILEVEL INHERITANCE
class Puppy : public Dog {  // Multilevel Inheritance
public:
    Puppy() {
        cout << "Waaw its a puppy!!! its so cuteeee" << endl;
    }
};

// MULTIPLE INHERITANCE
class Engine {
public:
    Engine() {
        cout << "Engine has started" << endl;
    }
};

class Wheels {
public:
    Wheels() {
        cout << "Wheels are rolling" << endl;
    }
};

class Car : public Engine, public Wheels {  // Multiple Inheritance
public:
    Car() {
        cout << "The car is running!" << endl;
    }
};

// HIERARCHICAL INHERITANCE
class Bird {
public:
    Bird() {
        cout << "This is a Bird" << endl;
    }
};

class Sparrow : public Bird {  // Hierarchical Inheritance
public:
    Sparrow() {
        cout << "A sparrow in specific" << endl;
    }
};

class Eagle : public Bird {  // Hierarchical Inheritance
public:
    Eagle() {
        cout << "An eagle in specific" << endl;
    }
};

// HYBRID INHERITANCE (Multiple + Single Combined)
class ElectricComponent {
public:
    ElectricComponent() {
        cout << "Electric Components have started" << endl;
    }
};

class ElectricCar : public Car, public ElectricComponent {  // Hybrid Inheritance
public:
    ElectricCar() {
        cout << "Electric Car is running" << endl;
    }
};

int main() {
    cout << "Single Inheritance:" << endl;
    Dog d;
    
    cout << "\nMultilevel Inheritance:" << endl;
    Puppy p;
    
    cout << "\nMultiple Inheritance:" << endl;
    Car c;
    
    cout << "\nHierarchical Inheritance:" << endl;
    Sparrow s;
    Eagle e;
    
    cout << "\nHybrid Inheritance:" << endl;
    ElectricCar ec;
    
    return 0;
}

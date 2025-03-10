#include <iostream>

using namespace std;

class A
{
public:
    virtual void display() = 0;
}; // any class which has the virtual function will act like abstract class

class B : public A
{
public:
    void display()
    {
        cout << "I am in Derived Class";
    }
};

int main()
{
    A a1; // cant create objects of an abstract class bcz it cant be instantiated
    B b1;
    b1.display();
    return 0;
}
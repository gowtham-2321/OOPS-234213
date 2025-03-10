#include <iostream>
using namespace std;

class Animal
{
public:
    void diplayAnimalName(); // class A has afuntion declared but not defined! this function is defined in the class B, hence A is an abstract class
};

class cat : public Animal
{
public:
    void displayAnimalName()
    {
        cout << "this is a cat";
    }
};

int main()
{
    cat meow;
    meow.displayAnimalName();
    return 0;
}

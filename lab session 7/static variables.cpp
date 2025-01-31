#include <iostream>
using namespace std;

class X {
    private:
        int i; //declaring the member variable of the class
        //static int si;
    public:
        static int si; //declaring class variable
        void set_i(int arg) { //a non static function can access "static variables" as well as "non static varaibles"
            i = arg; 
        }
        static void set_si(int arg) {   //static functions cant access non static variables, it can access only static variables
            si = arg;
        }

        void print_i() {
            cout << "Value of i = " << i << endl;
            cout << "Again, value of i = " << this->i << endl;
        }

        static void print_si() {
            cout << "Value of si = " << si << endl;
            //cout << "Again, value of si = " << this->si << endl; // error  
            //"This" is a pointer which always points to the current object under consideration ->>> similar to "self" in python
        }

};

int X::si = 99;       // Initialize static data member

int main() {
    cout<< X::si;
    X xobj;
    xobj.set_i(99); 
    xobj.print_i();
    xobj.set_si(99); //static functions can be called using objects of the class where it is declared..
    xobj.print_si();     
}



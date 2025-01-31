#include <iostream>
using namespace std;

class X {
    private:
        int i; //declaring the member variable of the class
        //static int si;
    public:
        static int si; //declaring class variable
        void set_i(int arg) { i = arg; }
        static void set_si(int arg) { si = arg; }

        void print_i() {
            cout << "Value of i = " << i << endl;
            cout << "Again, value of i = " << this->i << endl;
        }

        static void print_si() {
            cout << "Value of si = " << si << endl;
            //cout << "Again, value of si = " << this->si << endl; // error
        }

};

int X::si = 99;       // Initialize static data member

int main() {
  cout<< X::si;
 // X xobj;
  //xobj.set_i(99);
  //xobj.print_i();
  //xobj.set_si(99);
 // xobj.print_si();     
}
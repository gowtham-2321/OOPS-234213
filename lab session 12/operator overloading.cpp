#include<iostream>
using namespace std; 
class Complex {
private:
    int real=1, imag=3;
public:
// Complex(){
 //           real=0;
 //           imag=0;
// }
    Complex(int r=0, int i=0)  {real = r;   imag = i;}
         // This is automatically called when '+' is used with
    // between two Complex objects

    Complex operator + (Complex obj) { // we pass paramters after the symbol + , based on this arguements the operator works. so the operator function should have object arguements
        //operator keyword followed by the operator that needs to be overloaded
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res; // the return type for operator functions should be of type object
    }
    void print() { cout << real << " + i" << imag << endl; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
}
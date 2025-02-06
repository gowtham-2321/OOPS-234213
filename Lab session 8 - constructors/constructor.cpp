#include <iostream>
using namespace std;
class X {
    private:
        int i,j;
    public:
        X(){         //this is called as the default constructor, when i create an object by default this constructor will be called
            i=0;
            j=0;
        }
        X(int a,int b){     //this becomes parameterised constructors, this is called constructor overloading, when the same constructor is defined twice
        i=a;
        j=b;
        }
    void display(){
        cout<<"The number is "<<i<<"+i"<<j<<endl;  
    }
    ~X(){ //this is called as the destructor, it doesnt have any return type, destructor can not take parameters, 
        cout<<"Destrcutor is called"<<endl;
    }
 
};

int main() {
  X x1; //default constructor is called
  X x2(2,3); //parameterised constructor is called
  x1.display();
  x2.display();
  return 0;   
}

#include<iostream>
using namespace std;

class a {
    public: 
        void displayOne(); //class A has afuntion declared but not defined! this function is defined in the class B, hence A is an abstract class
};

class b: public a{
    public:
        void displayOne(){
            cout<<"I belong to child class"<<endl;
        }
};

int main(){
    b object_b;
    object_b.displayOne();
    object_b.displayOne();
    return 0;
}

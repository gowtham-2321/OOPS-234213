#include <iostream>
using namespace std;
class X {
	int i;
	string Name;
	public:
		X(){  // constructor is a function, the name of the constructor should be same as that of the class name, a constructor doesnt have any return type, a constructor intialises the variables in a class
    		cout<<"enter the age: ";
    		cin>>i;
    		Name="Sai";
  		}
  		void display(){
			cout<<"swami's age is: "<<i<<endl;
		}
};

int main() {
	X x1; // when an object is created the constructor function is called......
	//cout<<x1.i<<endl;
	//cout<<x1.Name<<endl; /// it is inaccessible
	x1.display();
	return 0;   
}

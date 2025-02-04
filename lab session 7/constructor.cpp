#include <iostream>
using namespace std;
class X {
	public:
		int i;
		string Name;
		X(){  // constructor is a function, the name of the constructor should be same as that of the class name, a constructor doesnt have any return type, a constructor intialises the variables in a class
			i=100;
			Name="Sai";
		}
		
};

int main() {
	X x1;
	cout<<x1.i<<endl;
	cout<<x1.Name<<endl;
	return 0;   
}

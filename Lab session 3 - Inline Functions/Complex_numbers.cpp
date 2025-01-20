#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).

class complex{
	
	public:
		int re, im; //Member Variables
		void get_Val(); //Member Functions
		void display(int real, int imaginary); //Member Functions
		void sum(int re1, int im1, int re2, int im2); //Member Functions
};

void complex:: get_Val(){ //Member Functions - inline function
	cout<<"Enter the real part of the complex number: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cin>>re; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
	cout<<"Enter the imaginary part of the complex number: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cin>>im; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
}

void complex:: display(int real, int imaginary){ //Member Functions - inline functions
	if (im<0)
		cout<<real<<imaginary<<"i"<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	else 
		cout<<real<<"+"<<imaginary<<"i"<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
}
void complex:: sum(int re1, int im1, int re2, int im2) //Member Functions - inline functions
{
	re = re1 + re2;
	im = im1 + im2;
	cout<<"The summation of the given two complex numbers is: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	display(re, im);
}

int main(){
	complex c1, c2, c3; //object creation
	c1.get_Val(); // Accessing the member functions using . operator.
	c2.get_Val();// Accessing the member functions using . operator.
	c3.sum(c1.re, c1.im, c2.re, c2.im); // Accessing the member functions using . operator.
}

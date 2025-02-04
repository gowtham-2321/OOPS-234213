#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).

class complex{
	
	public:
		int re, im; // Member variables

		complex(int real, int immaginary){
			re = real;
			im = immaginary;
		};

		void display(int real, int imaginary){ // Member Functions
			if (im<0)
				cout<<real<<imaginary<<"i"<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
			else 
				cout<<real<<"+"<<imaginary<<"i"<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		}
		
		void sum(int re1, int im1, int re2, int im2){ // Member Functions
			re = re1 + re2;
			im = im1 + im2;
			cout<<"The summation of the given two complex numbers is: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
			display(re, im);
		}
}; // class construt closed with;


int main(){
	complex c1(3,4), c2(4,5), c3(0,0);
	c3.sum(c1.re, c1.im, c2.re, c2.im); // Accessing the member functions using . operator.
}

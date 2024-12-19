#include <iostream>
using namespace std;

class complex{
	
	public:
		int re, im;
		void get_Val(){
			cout<<"Enter the real part of the complex number: ";
			cin>>re;
			cout<<"Enter the imaginary part of the complex number: ";
			cin>>im;
		}
		void display(int real, int imaginary){
			if (im<0)
				cout<<real<<imaginary<<"i"<<endl;
			else 
				cout<<real<<"+"<<imaginary<<"i"<<endl;
		}
		void sum(int re1, int im1, int re2, int im2)
		{
			re = re1 + re2;
			im = im1 + im2;
			cout<<"The summation of the given two complex numbers is: ";
			display(re, im);
		}
};
int main(){
	complex c1, c2, c3;
	c1.get_Val();
	c2.get_Val();
	c3.sum(c1.re, c1.im, c2.re, c2.im);
}

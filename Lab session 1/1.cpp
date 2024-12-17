#include<iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/

using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
int main(){ // In C++, main( )always has return type of int.
	int a = 6; 
	int b = 6;
	while(a<10){
		a = a/12 + 1;
		a +=b;
	}
	cout<<a;
	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	return 0;
}

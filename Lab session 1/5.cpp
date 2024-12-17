#include<iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/

using namespace std;//All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
int funcp(){
	static int x = 1;
	x++;
	return x;
}
int main(){
	int x,y;
	x = funcp();
	y = funcp() + x;
	cout<<(x+y)<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	return 0;
}

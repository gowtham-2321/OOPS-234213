#include<iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/

using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
int main(){
	float sum = 0.0, j = 1.0, i = 2.0;
	while(i/j > 0.0625){
		j = j + j;
		sum = sum + i/j;
		cout<<sum<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	}
	return 0;
}

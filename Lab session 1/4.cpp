#include<iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/
 
using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
int main()
{
	int A = 9, B = 3;
	while(A!=B)
	{
		if(A>B)
		A-=B;
		else
		B -= A;
	}
	cout<<A; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	return 0; 
}

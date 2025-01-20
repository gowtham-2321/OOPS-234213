#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/

using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class landmark // class definition is a logical construct only it does not occupy memory)
{
	public:
		string name; // Member variables
		string place; // Member variables
		
		void set(string n) //Member function
		{
			name = n;
			cout<<"Enter the name of the place where it is Located it: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc*/
			cin>>place; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
		}
		void display() //Member function
		{
			cout<<" "<<name<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc*/
			cout<<"It is located in "<<place<<endl; //*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc*/
		}
	
};//Body of the class is closed.
int main() // In C++, main( )always has return type of int.
{
	landmark l; //Creation of object...Memory is allocated here.
	string name;
	
	cout<<"Enter Name of the Landmark: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc*/
	cin>>name; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
	
	l.set(name); // Accessing the member functions using . operator, and passing paramaters to the function
	l.display(); // Accessing the member functions using . operator.
}

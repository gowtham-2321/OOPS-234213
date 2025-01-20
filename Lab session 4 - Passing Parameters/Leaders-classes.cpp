#include <iostream>
using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class Leaders
{
	public:
		string Name; // Member variables
		string Birth_place; // Member variables
		int years_lived; // Member variables
		void set(string N) //Member function
		{
			Name = N;
			cout<<"Enter the Birth place of the Person: "; //The operator cout is an object Belongs to output stream (O stream)class.
			cin>>Birth_place; //The operator cin is an object Belongs to input stream class.
			cout<<"Years lived: "; //The operator cout is an object Belongs to output stream (O stream)class.
			cin>>years_lived; //The operator cin is an object Belongs to input stream class.
		}
		void display() //Member function
		{
			cout<<"Name: "<<Name<<endl; //The operator cout is an object Belongs to output stream (O stream)class.
			cout<<"Birth place; "<<Birth_place<<endl; //The operator cout is an object Belongs to output stream (O stream)class.
			cout<<"Years lived: "<<years_lived<<endl; //The operator cout is an object Belongs to output stream (O stream)class.
		}
	
};//Body of the class is closed.
int main() // In C++, main( )always has return type of int.
{
	Leaders l1,l2; //Creation of object...Memory is allocated here.
	string name1, name2;

	cout<<"Enter Name of the Leader 1: "; //The operator cout is an object Belongs to output stream (O stream)class.
	cin>>name1; //The operator cin is an object Belongs to input stream class.
	
	l1.set(name1); // Accessing the member functions using . operator, and passing parameters to the function

	cout<<"Enter Name of the Leader 2: "; //The operator cout is an object Belongs to output stream (O stream)class.
	cin>>name2; //The operator cin is an object Belongs to input stream class.

	l2.set(name2); // Accessing the member functions using . operator, and passing parameters to the function

	l1.display(); // Accessing the member functions using . operator.
	l2.display(); // Accessing the member functions using . operator.
}


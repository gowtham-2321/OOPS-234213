#include <iostream>
using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class Leaders
{
	public:
		string Name;
		string Birth_place;
		int years_lived;
		void set() //Member function
		{
			cout<<"Enter Name of the Leader: "; //The operator cout is an object Belongs to output stream (O stream)class.
			cin>>Name; //The operator cin is an object Belongs to input stream class.
			cout<<"Enter the Birth place of the Person: "; //The operator cout is an object Belongs to output stream (O stream)class.
			cin>>Birth_place;
			cout<<"Years lived: "; //The operator cout is an object Belongs to output stream (O stream)class.
			cin>>years_lived;
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
	l1.set();
	l2.set();
	l1.display();
	l2.display();
}

#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).

class Tree {

public:
	int weight, age, height; // Member Variables
	string name; // Member Variables
	
	void get_details() // Member Functions
	{
		cout<<"Enter the name of the tree: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cin>>name; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
		cout<<"Enter the age of the tree: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cin>>age; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
		cout<<"Enter the height of the tree: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cin>>height; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
		cout<<"Enter the weight of the tree: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cin>>weight; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
	}
    void display() { // Member Functions
    	cout<<"The name of the tree is: "<<name<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cout<<"The height of the tree is: "<<height<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cout<<"The weight of the tree is: "<<weight<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cout<<"The age of the tree is: "<<age<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
    }
    
    int avg_height(int a, int b, int c){ // Member Functions
    	return (a+b+c)/3;
	}
    
};

int main() {
	Tree a, b, c, avg; // object creation
	a.get_details(); // Accessing the member functions using . operator.
	b.get_details(); // Accessing the member functions using . operator.
	c.get_details(); // Accessing the member functions using . operator.
	
	a.display(); // Accessing the member functions using . operator.
	b.display(); // Accessing the member functions using . operator.
	c.display(); // Accessing the member functions using . operator.
	
	cout<<"the avg height of the trees is: "<<avg.avg_height(a.height, b.height, c.height); /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	
    return 0;
}


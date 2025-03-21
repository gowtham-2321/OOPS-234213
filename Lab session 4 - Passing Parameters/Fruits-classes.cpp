#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).

class Fruits { // class definition is a logical construct only it does not occupy memory)

public:
	int cost, quantity; // Member variables
	string name, color; // Member variables
	
	void get_details() //Member funtions
	{
		cout<<"Enter the name of the fruit: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cin>>name; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
		cout<<"Enter the color of the fruit: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cin>>color; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
		cout<<"Enter the cost of the fruit: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cin>>cost; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
		cout<<"Enter the quantity of the fruit: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cin>>quantity; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
	}
    void display() { //Member funtions
    	cout<<"The name of the fruit is: "<<name<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cout<<"The color of the fruit is: "<<color<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cout<<"The cost of the fruit is: "<<cost<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cout<<"The quantity of the fruit is: "<<quantity<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
		cout<<"The total cost of the fruit is: "<<total_cost()<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
    }
    
    int compare_prices(int a, int b, int c){ //Member funtions
    	int max;
    	if(a>=b)
    		max = a;
    	else
    		max = b;
    	if(max<c)
    		max = c;
    	return max;
	}
	
	int total_cost() //Member funtions
	{
		return quantity*cost;
	}
    
}; // class construt closed with;

int main() {
	Fruits a, b, c, max; // object creation
	a.get_details(); // Accessing the member functions using . operator.
	b.get_details(); // Accessing the member functions using . operator.
	c.get_details(); // Accessing the member functions using . operator.
	
	a.display(); // Accessing the member functions using . operator.
	b.display(); // Accessing the member functions using . operator.
	c.display(); // Accessing the member functions using . operator.
	
	
	cout<<"the max cost of the fruits is: "<<max.compare_prices(a.cost, b.cost, c.cost); /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	//parameters are passed to the function
    return 0;
}


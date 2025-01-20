#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).

class Student {

public:
	int Total_marks; // Member Variables
	string name; // Member Variables
    void setMarks() { // Member Functions
    	cout<<"Enter the marks of "<<name<<" :"; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
    	cin>>Total_marks; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
    }
    int avg_marks(int a, int b, int c){ // Member Functions
    	int avg_marks;
    	avg_marks = (a+b+c)/3;
    	return avg_marks;
	}

};

int main() {
	Student Vardhan, Rajesh, Badri, avg; // object creation
	Vardhan.name = "Vardhan";
	Vardhan.setMarks(); // Accessing the member functions using . operator.
	Rajesh.name = "Rajesh";
	Rajesh.setMarks(); // Accessing the member functions using . operator.
	Badri.name = "Badri";
	Badri.setMarks(); // Accessing the member functions using . operator.
	cout<<"The avg marks scored is: "<<avg.avg_marks(Vardhan.Total_marks, Rajesh.Total_marks, Badri.Total_marks)<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	
    return 0;
}


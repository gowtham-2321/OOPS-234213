#include <iostream>
using namespace std;

class Student {

public:
	int Total_marks;
	string name;
    void setMarks() {
    	cout<<"Enter the marks of "<<name<<" :";
    	cin>>Total_marks;
    }
    int avg_marks(int a, int b, int c){
    	int avg_marks;
    	avg_marks = (a+b+c)/3;
    	return avg_marks;
	}

};

int main() {
	Student Vardhan, Rajesh, Badri, avg;
	Vardhan.name = "Vardhan";
	Vardhan.setMarks();
	Rajesh.name = "Rajesh";
	Rajesh.setMarks();
	Badri.name = "Badri";
	Badri.setMarks();
	cout<<"The avg marks scored is: "<<avg.avg_marks(Vardhan.Total_marks, Rajesh.Total_marks, Badri.Total_marks)<<endl;
	
    return 0;
}


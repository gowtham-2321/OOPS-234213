#include <iostream>
using namespace std;

class Tree {

public:
	int weight, age, height;
	string name;
	
	void get_details()
	{
		cout<<"Enter the name of the tree: ";
		cin>>name;
		cout<<"Enter the age of the tree: ";
		cin>>age;
		cout<<"Enter the height of the tree: ";
		cin>>height;
		cout<<"Enter the weight of the tree: ";
		cin>>weight;
	}
    void display() {
    	cout<<"The name of the tree is: "<<name<<endl;
		cout<<"The height of the tree is: "<<height<<endl;
		cout<<"The weight of the tree is: "<<weight<<endl;
		cout<<"The age of the tree is: "<<age<<endl;    	
    }
    
    int avg_height(int a, int b, int c){
    	return (a+b+c)/3;
	}
    
};

int main() {
	Tree a, b, c, avg;
	a.get_details();
	b.get_details();
	c.get_details();
	
	a.display();
	b.display();
	c.display();
	
	cout<<"the avg height of the trees is: "<<avg.avg_height(a.height, b.height, c.height);
	
    return 0;
}


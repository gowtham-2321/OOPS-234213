#include <iostream>
using namespace std;

class Fruits {

public:
	int cost, quantity;
	string name, color;
	
	void get_details()
	{
		cout<<"Enter the name of the fruit: ";
		cin>>name;
		cout<<"Enter the color of the fruit: ";
		cin>>color;
		cout<<"Enter the cost of the fruit: ";
		cin>>cost;
		cout<<"Enter the quantity of the fruit: ";
		cin>>quantity;
	}
    void display() {
    	cout<<"The name of the fruit is: "<<name<<endl;
		cout<<"The color of the fruit is: "<<color<<endl;
		cout<<"The cost of the fruit is: "<<cost<<endl;
		cout<<"The quantity of the fruit is: "<<quantity<<endl; 
		cout<<"The total cost of the fruit is: "<<total_cost()<<endl;
    }
    
    int compare_prices(int a, int b, int c){
    	int max;
    	if(a>=b)
    		max = a;
    	else
    		max = b;
    	if(max<c)
    		max = c;
    	return max;
	}
	
	int total_cost()
	{
		return quantity*cost;
	}
    
};

int main() {
	Fruits a, b, c, max;
	a.get_details();
	b.get_details();
	c.get_details();
	
	a.display();
	b.display();
	c.display();
	
	
	cout<<"the max cost of the fruits is: "<<max.compare_prices(a.cost, b.cost, c.cost);
	
    return 0;
}


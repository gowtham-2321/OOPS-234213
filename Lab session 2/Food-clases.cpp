#include <iostream>
using namespace std;

class Food {

public:
	int cost, quantity;
	string name, color;
	
	void get_details()
	{
		cout<<"Enter the name of the food item: ";
		cin>>name;
		cout<<"Enter the color of the food item: ";
		cin>>color;
		cout<<"Enter the cost of the food item: ";
		cin>>cost;
		cout<<"Enter the quantity of the food item: ";
		cin>>quantity;
	}
    void display() {
    	cout<<"The name of the food item is: "<<name<<endl;
		cout<<"The color of the food item is: "<<color<<endl;
		cout<<"The cost of the food item is: "<<cost<<endl;
		cout<<"The quantity of the food item is: "<<quantity<<endl; 
		cout<<"The total cost of the food item is: "<<total_cost()<<endl;
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
	Food a, b, c, max;
	a.get_details();
	b.get_details();
	c.get_details();
	
	a.display();
	b.display();
	c.display();
	
	
	cout<<"the max cost of the food item is"<<max.compare_prices(a.cost, b.cost, c.cost);
	
    return 0;
}


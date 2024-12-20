#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

class Planets {

private:
	double mass; // in kg
	double radius; // In meters
	double G = 6.67430e-11; // Universal gravitational constant

public:
	string name;
    void setMass() {
    	cout<<"Enter the mass of the planet: "; //in kg
    	cin>>mass;
    }
    void setRadius() {
        cout<<"Enter the radius of the planet: "; // in meters
    	cin>>radius;
    }

    double calculateEscapeVelocity(){
        return sqrt(2 * G * mass / radius);
    }
};

int main() {
	Planets Jupiter, Earth, Mars;
	
	Earth.name = "Earth";
	Earth.setMass();
	Earth.setRadius();
	cout<<"The escape velocity of the planet "<<Earth.name<<" is "<<Earth.calculateEscapeVelocity()<<endl;
	
	Jupiter.name = "Jupiter";
	Jupiter.setMass();
	Jupiter.setRadius();
	cout<<"The escape velocity of the planet "<<Jupiter.name<<" is "<<Jupiter.calculateEscapeVelocity()<<endl;
	
	Mars.name = "Mars";
	Mars.setMass();
	Mars.setRadius();
	cout<<"The escape velocity of the planet "<<Mars.name<<" is "<<Mars.calculateEscapeVelocity()<<endl;
	
    return 0;
}


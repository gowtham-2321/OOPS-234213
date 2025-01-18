#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


#include <cmath> // For sqrt function
using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).

class Planets {

private:
	double mass; // in kg
	double radius; // In meters
	double G = 6.67430e-11; // Universal gravitational constant

public:
	string name;
    void setMass();
    void setRadius();
    double calculateEscapeVelocity();
};

void Planets:: setMass() {
	cout<<"Enter the mass of the planet: "; //in kg
	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cin>>mass; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
}

void Planets:: setRadius() {
	cout<<"Enter the radius of the planet: "; // in meters
	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cin>>radius; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
}

double Planets:: calculateEscapeVelocity(){
    return sqrt(2 * G * mass / radius);
}

int main() {
	Planets Jupiter, Earth, Mars;
	
	Earth.name = "Earth";
	Earth.setMass();
	Earth.setRadius();
	cout<<"The escape velocity of the planet "<<Earth.name<<" is "<<Earth.calculateEscapeVelocity()<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	
	Jupiter.name = "Jupiter";
	Jupiter.setMass();
	Jupiter.setRadius();
	cout<<"The escape velocity of the planet "<<Jupiter.name<<" is "<<Jupiter.calculateEscapeVelocity()<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	
	Mars.name = "Mars";
	Mars.setMass();
	Mars.setRadius();
	cout<<"The escape velocity of the planet "<<Mars.name<<" is "<<Mars.calculateEscapeVelocity()<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	
    return 0;
}


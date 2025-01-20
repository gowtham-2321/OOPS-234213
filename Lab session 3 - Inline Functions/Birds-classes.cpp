#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).

class Bird {

public:
    char species[8];  //Member Variables
    void can_fly(char sp[8]); //Member funtions
    void can_swim(char sp[8]); //Member funtions
};

void Bird:: can_fly(char sp[8]){ //Member funtions - inline version
        if (sp == "penguin" || sp =="ostrich") {
        	cout<<sp<<" is not adapted to flying.\n"; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
        }
		else{
            cout<<sp<<" flies exceptionally.\n";
            /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
        }
}

void Bird:: can_swim(char sp[8]){ //Member funtions - inline version
        if (sp == "penguin") {
            cout<<sp<<" swims exceptionally well in water.\n";
            /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
        }
		else {
            cout<<sp<<" is not adapted to swimming.\n";
            /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
        }
    } 



int main() {
    
    Bird ostrich, sparrow, penguin; // Object creation

    
    ostrich.can_fly("ostrich");// Accessing the member functions using . operator.
    ostrich.can_swim("ostrich");// Accessing the member functions using . operator.
	
    sparrow.can_fly("sparrow");// Accessing the member functions using . operator.
    sparrow.can_swim("sparrow");// Accessing the member functions using . operator.
    
    penguin.can_fly("penguin");// Accessing the member functions using . operator.
    penguin.can_swim("penguin");// Accessing the member functions using . operator.
    
    return 0;
}


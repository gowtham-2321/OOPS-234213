#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).

class Bird {

public:
    char species[8];
    void can_fly(char sp[8]){
        if (sp == "penguin" || sp =="ostrich") {
        	cout<<sp<<" is not adapted to flying.\n"; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
        }
		else{
            cout<<sp<<" flies exceptionally.\n";
            /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
        }
    }


    void can_swim(char sp[8]){
        if (sp == "penguin") {
            cout<<sp<<" swims exceptionally well in water.\n";
            /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
        }
		else {
            cout<<sp<<" is not adapted to swimming.\n";
            /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
        }
    } 
};

int main() {
    
    Bird ostrich, sparrow, penguin;

    
    ostrich.can_fly("ostrich");
    ostrich.can_swim("ostrich");
	
    sparrow.can_fly("sparrow");
    sparrow.can_swim("sparrow");
    
    penguin.can_fly("penguin");
    penguin.can_swim("penguin");
    
    return 0;
}


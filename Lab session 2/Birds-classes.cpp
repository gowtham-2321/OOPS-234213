#include <iostream>
using namespace std;

class Bird {

public:
    char species[8];
    void can_fly(char sp[8]){
        if (sp == "penguin" || sp =="ostrich") {
        	cout<<sp<<" is not adapted to flying.\n";
        }
		else{
            cout<<sp<<" flies exceptionally.\n";
        }
    }


    void can_swim(char sp[8]){
        if (sp == "penguin") {
            cout<<sp<<" swims exceptionally well in water.\n";
        }
		else {
            cout<<sp<<" is not adapted to swimming.\n";
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


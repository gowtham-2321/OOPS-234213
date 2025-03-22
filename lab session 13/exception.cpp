#include <iostream>
using namespace std;

void checker(string name) {
    try {
        if (name == "admin") { 
            throw name;  
        }
        cout << "The chosen username is: " << name << endl;
    }
    catch (const string& ex) {  // refer geeks for geeks, a bit confusing but still!!!
        cout << "Enter a valid name (admin is already chosen)\n";
    }
}

int main() {
    string name;
    cout << "Enter a username: ";
    cin >> name;
    checker(name);
    return 0;
}

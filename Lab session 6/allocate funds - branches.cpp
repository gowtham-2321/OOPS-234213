#include <iostream>
using namespace std;

// Global variable for initial capital
float initialCapital = 50.0;

class Branch {
public:
    string name;
    float allocatedFunds;

    // Function to allocate funds
    void allocateFunds(string branchName, float amount) {
        name = branchName;
        if (amount > initialCapital) {
            cout << "Error: Insufficient capital for " << name << "!\n";
            allocatedFunds = 0;
        } else {
            allocatedFunds = amount;
            initialCapital -= amount; // Deduct from global initial capital
        }
    }

    // Function to display allocated funds
    void displayAllocatedFunds() {
        cout << "Funds allocated to " << name << ": Rs " << allocatedFunds << " Lakhs\n";
    }
};

int main() {
    // Creating three branch objects
    Branch branchA, branchB, branchC;

    // Allocating funds
    branchA.allocateFunds("Japan", 15.0);
    branchB.allocateFunds("United States", 14.0);
    branchC.allocateFunds("India", 9.0);

    // Displaying allocated funds
    cout << "DESCRIPTION:\n";
    cout << "--------------------------------------------------------------------\n";
    branchA.displayAllocatedFunds();
    branchB.displayAllocatedFunds();
    branchC.displayAllocatedFunds();
    cout << "--------------------------------------------------------------------\n";

    // Displaying remaining capital
    cout << "Remaining capital with the Company is: Rs " << initialCapital << " Lakhs\n";

    return 0;
}

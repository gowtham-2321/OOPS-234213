#include <iostream>
using namespace std;

class Company {
public:
    float initialCapital;
    float allocatedA, allocatedB, allocatedC;

    void allocateFunds() {
        allocatedA = 15.0;
        allocatedB = 14.0;
        allocatedC = 9.0;
    }

    float calculateRemainingCapital() {
        float totalAllocated = allocatedA + allocatedB + allocatedC;
        return initialCapital - totalAllocated;
    }

    // Function to display allocated funds for each sub-branch
    void displayAllocatedFunds() {
        cout << "DESCRIPTION: " <<endl;
        cout << "--------------------------------------------------------------------" <<endl;
        cout << "Funds allocated to Sub-branch A: Rs " << allocatedA << " Lakhs" <<endl;
        cout << "Funds allocated to Sub-branch B: Rs " << allocatedB << " Lakhs" <<endl;
        cout << "Funds allocated to Sub-branch C: Rs " << allocatedC << " Lakhs" <<endl;
        cout << "--------------------------------------------------------------------" <<endl;
    }
};

int main() {
    Company comp;
    comp.initialCapital = 50.0; // Initial capital in lakhs

    // Allocate funds to sub-branches
    comp.allocateFunds();

    // Display allocated funds
    comp.displayAllocatedFunds();

    // Calculate and display the remaining capital
    float remaining = comp.calculateRemainingCapital();
    cout << "Remaining capital with Company X: Rs " << remaining << " Lakhs" << endl;

    return 0;
}

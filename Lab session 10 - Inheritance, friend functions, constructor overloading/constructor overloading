#include <iostream>
using namespace std;
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    //Default Constructor
    BankAccount() {
        accountHolder = "Unknown";
        accountNumber = 0;
        balance = 0.0;
        cout << "Default Account Created" << endl;
    }

    //Initialize with account holder and number
    BankAccount(string name, int accNo) {
        accountHolder = name;
        accountNumber = accNo;
        balance = 0.0;
        cout << "Account Created for " << accountHolder << " with Account Number: " << accountNumber << endl;
    }

    //Initialize with account holder, number, and initial balance
    BankAccount(string name, int accNo, double initialBalance) {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
        cout << "Account Created for " << accountHolder << " with Account Number: " 
             << accountNumber << " and Balance: $" << balance << endl;
    }
};

int main() {
    cout << "Creating Accounts...\n" << endl;

    // Default constructor
    BankAccount acc1;
    
    cout << "\n------------------------\n" << endl;

    // Constructor with account holder and account number
    BankAccount acc2("Gowtham Jegathesan", 63810869);
    
    cout << "\n------------------------\n" << endl;

    // Constructor with account holder, account number, and initial balance
    BankAccount acc3("Gowtham Jegathesan", 63810869, 25000.76);

    return 0;
}

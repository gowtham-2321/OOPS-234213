#include<iostream>
using namespace std;

class electricity {
    static int initial_amount;
    public:
        int units, amount;
        void getInitialAmount()
        {
            cout<<"Give the initial amount of the user: ";
            cin>>initial_amount;
        }
        void getNumberOfUnits()
        {
            cout<<"Give the number of units consumed by the user: ";
            cin>>units;
        }
        int calculateAmount(){
            if (units<=100){
                amount = units * .50;
            }
            if (units > 300)
            {
                amount = (units-100)*60 + 50;
            }
            return amount;
        }
        int taxDeduction(int amount){
            if (amount>250){
                amount = (amount-250)*.15 + amount;
            }
            return amount;
        }
};
int electricity::initial_amount = 0;
int main (){
    electricity e;
    e.getInitialAmount();
    e.getNumberOfUnits();
    int amount = e.calculateAmount();
    cout << "Amount before tax: " << amount << endl;
    int final_amount = e.taxDeduction(amount);
    cout << "Amount after tax: " << final_amount << endl;
    return 0;
}
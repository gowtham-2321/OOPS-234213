#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).
class Bank{
	long long int No_of_users;
    int  Transactions_perday, Principle_amount, Time_period, Revenue, Account_number;
    float Interest_rate = 7.8;
    char Type_of_bank[20], Branches[20], Headquarters[30], IFSC_code[10];
    
    public: 
        char Name[50];
    	int calculate_interest(){
    		float SI;
    		cout<<"Enter the principle amount: ";
    		cin>>Principle_amount;
    		cout<<"Enter the time period: ";
    		cin>>Time_period;
    		SI = (Principle_amount * Interest_rate * Time_period)/100;
    		cout<<"For the current interest rate of "<<Interest_rate<<" per annum, the Simple Interest for the given Time Period of "<<Time_period<<" years is: "<<SI<<endl;	
			return SI;
		}
		bool is_Centralised(){
			cout<<"Enter your bank name: ";
			cin>>Name;
			if (Name == "Andhra Bank" || Name == "HDFC"){
				return false;
			}
			else{
				return true;
			}
		}
		
};


int main(){
 float si;
 bool type;
 Bank b1;
 
 si = b1.calculate_interest();
 type = b1.is_Centralised();
 if(type){
 	cout<<"Your bank is a Centralised Bank"<<endl;
 }	
 else
 	cout<<"Your bank is not a Centralised Bank"<<endl;

}

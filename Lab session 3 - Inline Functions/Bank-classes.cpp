#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for standard).
class Bank{
	long long int No_of_users;
    int  Transactions_perday, Principle_amount, Time_period, Revenue, Account_number;
    float Interest_rate = 7.8;
    char Type_of_bank[20], Branches[20], Headquarters[30], IFSC_code[10];
    
    public: 
        char Name[50];
    	int calculate_interest();
		bool is_Centralised();
		void display();
		
};

int Bank:: calculate_interest(){
	float SI;
	cout<<"Enter the principle amount: ";
	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cin>>Principle_amount;
	/*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
	cout<<"Enter the time period: ";
	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cin>>Time_period;
	/*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
	SI = (Principle_amount * Interest_rate * Time_period)/100;
	cout<<"For the current interest rate of "<<Interest_rate<<" per annum, the Simple Interest for the given Time Period of "<<Time_period<<" years is: "<<SI<<endl;	
	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	return SI;
}

bool Bank:: is_Centralised(){
	cout<<"Enter your bank name: ";
	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cin>>Name;
	/*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
	if (Name == "Andhra Bank" || Name == "HDFC"){
		return false;
	}
	else{
		return true;
	}
}

void Bank:: display(){
	cout<<"Enter your Account Number: ";
	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cin>>Account_number;
	/*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
	cout<<"Your Name : XXX"<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cout<<"Your Account number : "<<Account_number<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
	cout<<"Your Bank name : "<<Name<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
}

int main(){
 float si;
 bool type;
 Bank b1;
 
 si = b1.calculate_interest();
 type = b1.is_Centralised();
 if(type){
 	cout<<"Your bank is a Centralised Bank"<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
 }	
 else
 	cout<<"Your bank is not a Centralised Bank"<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
 b1.display();
}

#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for “standard”).

int main(){
 long long int No_of_users;
 int  Transactions_perday, Principal_amount, Time_period, Interest_rates, Revenue, Account_number;
 char Name[50], type_of_bank[20], Branches[20], Headquarters[30], IFSC_code[10];
 
 cout<<"Enter the no of users: ";
 cin>>No_of_users;
 cout<<"The Total Number of Users are: "<<No_of_users<<endl;	

 cout<<"Enter the Account Number: ";
 cin>>No_of_users;
 cout<<"The Account Number of the user is: "<<No_of_users<<endl;	
 
 cout<<"Enter the IFSC code: ";
 cin>>IFSC_code;
 cout<<"The IFSC_code is: "<<IFSC_code<<endl;	
}

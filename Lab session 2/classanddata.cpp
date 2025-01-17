#include <iostream>
/*An important standard library is iostreams, which allow you to read
from files and the keyboard, and to write to files and the display.*/


using namespace std; //All of the Standard C++ libraries are wrapped in a single namespace, which is std (for �standard�).

int main(){
 long long int No_of_users;
 int  Transactions_perday, Principal_amount, Time_period, Interest_rates, Revenue, Account_number;
 char Name[50], type_of_bank[20], Branches[20], Headquarters[30], IFSC_code[10];
 
 cout<<"Enter the no of users: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
 cin>>No_of_users; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
 cout<<"The Total Number of Users are: "<<No_of_users<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/

 cout<<"Enter the Account Number: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
 cin>>No_of_users; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
 cout<<"The Account Number of the user is: "<<No_of_users<<endl; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
 
 cout<<"Enter the IFSC code: "; /*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
 cin>>IFSC_code; /*The operator cin is an object Belongs to input stream class Used to perform read operations from the input devices e.g. keyboard called extraction / get /input operator */
 cout<<"The IFSC_code is: "<<IFSC_code<<endl;	/*The operator cout is an object Belongs to output stream class Used to perform write operations on the output devices e.g. screen, disk etc.*/
}

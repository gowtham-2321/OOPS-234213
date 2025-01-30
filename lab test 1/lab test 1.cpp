#include<iostream>
using namespace std;

class programmer{
     
    public:
    int graduate_marks, postgraduate_marks, interview_marks;
    string name;
        void get_details()
        {
            cout<<"Enter the name: ";
            cin>>name;
            while (true)
            {
            	cout<<"Enter the graudate marks: ";
            	cin>>graduate_marks;
            	if ((graduate_marks > 60) && (graduate_marks < 99))
					break;
				cout<<"Enter valid graduate marks"<<endl;
			}
			while (true)
            {
            	cout<<"Enter the postgraduate marks: ";
            	cin>>postgraduate_marks;
            	if ((postgraduate_marks > 60) && (postgraduate_marks < 99))
					break;
				cout<<"Enter valid post graduate marks"<<endl;
			}
            while (true)
            {
            	cout<<"Enter the Interview marks: ";
            	cin>>interview_marks;
            	if ((interview_marks > 0) && (interview_marks < 10))
					break;
				cout<<"Enter valid interview marks"<<endl;
			}   
        }
        
        void display()
        {
            cout<<"Details of "<<name<<endl;
            cout<<"graudate marks: "<<graduate_marks<<endl;
            cout<<"post graduate marks: "<<postgraduate_marks<<endl;
            cout<<"interview marks: "<<interview_marks<<endl;
        }
};

class programmer_combo{
    programmer p1, p2;
    
    public:
        bool check_marks()
        {
        	p1.get_details();
    		p2.get_details();
    		
            return ((p1.graduate_marks + p2.graduate_marks > 150) && (p1.postgraduate_marks + p2.postgraduate_marks > 180) && (p1.interview_marks + p2.interview_marks > 9))
             
        }
};


int main(){
	
	programmer_combo pair;
	bool a = pair.check_marks();
	if (a){
		cout<<"the programmer pair is eligible to work"<<endl;	
	}
	else
		cout<<"the pair is not eligible"<<endl;

}

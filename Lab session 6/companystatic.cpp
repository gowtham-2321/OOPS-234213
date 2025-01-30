#include<iostream>
using namespace std;
class companyX{
	
	static int Capital; // it acts like a global variable and there exists only one Capital variable -> can be updated only by the functions of this particular class and cant be edited by expressions or functions outside this class
	int RAmount;
	public:
	void Require(int x){
		RAmount = x;	
	}	
	int Allocate(){
		Capital=Capital-RAmount;
		return Capital;
	}
		
};
int companyX:: Capital = 50;
int main(){
	companyX A,B,C;
	A.Require(15);
	int BalA=A.Allocate();
	B.Require(10);
	int BalB=B.Allocate();
	C.Require(9);
	int BalC=C.Allocate();
	cout<<BalA<<endl;
	cout<<BalB<<endl;
	cout<<BalC<<endl;
	return 0;
}

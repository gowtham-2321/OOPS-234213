#include <iostream>
using namespace std;
class number {
	protected:
		int val;
	public:
		number(int i) { val = i; }
		// show() is a pure virtual function
		virtual void show() = 0;
};
class hextype : public number {
	public:
		hextype(int i) : number(i) { }
		void show() {
			cout << hex << val << "\n";
		}
};
class dectype : public number {
	public:
		dectype(int i) : number(i) { }
		void show() {
			cout << val << "\n";
		}
};
class octtype : public number {
	public:
		octtype(int i) : number(i) { }
		void show() {
			cout << oct << val << "\n";
		}
};
int main(){
	number *p; //when *p is cdeclared base class class pointer is created whihc stores the address of the derived class
	dectype d(20);
	hextype h(20);
	octtype o(20);
	p=&d;
	p->show(); // displays 20 - decimal, the function is called at runtie
	p=&h;
	p->show(); // displays 14 - hexadecimal
	p=&o;
	p->show(); // displays 24 - octal
	return 0;
}

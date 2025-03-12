#include <iostream>
using namespace std;
class number { //function overridding is used to implement runtime polymorphism in c++
	protected:
		int val;
	public:
		void setval(int i) { val = i; }
		// show() is a pure virtual function
		virtual void show() = 0;
};
class hextype : public number {
	public:
		void show() {
			cout << hex << val << "\n";
		}
};
class dectype : public number {
	public:
		void show() {
			cout << val << "\n";
		}
};
class octtype : public number {
	public:
		void show() {
			cout << oct << val << "\n";
		}
};

void f(number &n){
	n.show();
}

int main(){
	dectype d;
	hextype h;
	octtype o;
	f(d); //instead of a pointer we have reference of the class
	f(h); //instead of a pointer we have reference of the class
	f(o); //instead of a pointer we have reference of the class
	return 0;
}

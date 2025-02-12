#include<iostream>
using namespace std;

int main()
{
    int value1 = 1, value2 = 2, value3 = 3;
    int &valueref = value1;
    cout<<"Value 1  = "<< value1 <<" Value 2 = "<< value2 <<" Value 3 = "<< value3 <<" reference = "<< valureref << endl;
    valueref = value2;
    cout<<"Value 1  = "<< value1 <<" Value 2 = "<< value2 <<" Value 3 = "<< value3 <<" reference = "<< valureref << endl;
    valueref = value3;
    cout<<"Value 1  = "<< value1 <<" Value 2 = "<< value2 <<" Value 3 = "<< value3 <<" reference = "<< valureref << endl;
    cout<<"&Value 1  = "<< &value1 <<" &Vlaue 2 = "<< &value2 <<" &Value 3 = "<< &value3 <<" &reference = "<< &valueref << endl;
}

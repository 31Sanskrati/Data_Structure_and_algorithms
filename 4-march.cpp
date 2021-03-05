#include <iostream>
#include <iomanip>//for using setw
using namespace std;

int main(){
//*********for running make each section a comment**********

//Constant value**
    int a = 5; //for making this constant write const int a =5;
    cout<<"the value of a is "<<a<<endl; 
    a = 45;
    cout<<"The new value of a is "<<a;

//Manipulators in C++**
    int a=3, b=738, c=55943;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of a is: "<<setw(5)<<a<<endl;
    cout<<"The value of b is: "<<setw(5)<<b<<endl;
    cout<<"The value of c is: "<<setw(5)<<c<<endl;

//operator precendence
    int a=3, b=6;
    int c = (((a*b)+10)-b)
    return 0;
}

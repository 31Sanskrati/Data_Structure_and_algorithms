#include <iostream>
#include <iomanip>//for using setw
using namespace std;

int main(){
//*********for running the code --> make each section a comment**********

//Constant value**
    // int num = 5; //for making this constant write const int a =5;
    // cout<<"the value of num is "<<a<<endl; 
    // num = 45;
    // cout<<"The new value of num is "<<a;

//Manipulators in C++**
    int a=3, b=738, c=55943;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    //setw(5) --> will behave like the variable has width of 5
    cout<<"The value of a is: "<<setw(5)<<a<<endl;
    cout<<"The value of b is: "<<setw(5)<<b<<endl;
    cout<<"The value of c is: "<<setw(5)<<c<<endl;

    return 0;
}

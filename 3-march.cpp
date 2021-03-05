# include <iostream>

// # include "" for adding user defined header like iostream
using namespace std;

int z = 100;

int main(){
//*********for running make each section a comment**********
    int a, b;
    cout<< "Enter the value of a:"<<endl; 
    cin>>a;

    cout<<"Enter the value of b:\n";
    cin>>b;

//Arithmatic operator
    cout<<"The value of + is "<< a+b<<endl;
    cout<<"The value of - is "<< a-b<<endl;
    cout<<"The value of * is "<< a*b<<endl;
    cout<<"The value of / is "<<a/b<<endl;
    cout<<"The value of modulo is "<<a%b<<endl;
    cout<<"The value of increment operator of a is "<<a++<<endl;
    cout<<"The value of decrement operator of a is "<<a--<<endl;
    cout<<"The value of increment operator of a is "<<++a<<endl;
    cout<<"The value of decrement operator of a is "<<--a<<endl;
    cout<<endl;

//comparision operator
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of not equal a != b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<endl;

//Logical operators
    cout<<"The value of end logical operator is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of or logical operator is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of not logical operator is: "<<(!(a<b))<<endl;
    cout<<endl;

//Variables --> Local and global
    int x, y, z;
    cout<<"Enter the value of x \n";
    cin>>x;
    cout<<"Enter the value of y \n";
    cin>>y;
    z = x + y;
    cout<<"The sum is "<<z<<endl;
    cout<<"The sum from my brother is "<<::z; //Scope resolution operator --> for printing global value
    cout<<endl;

//For checking what C++ will consider 33.3
    float d=33.3f;
    long double e =33.3l;
    cout<<endl;
    cout<<"The value of d is "<<(int)d<<endl;//or int(d)
    cout<<"The real value of d is "<<(float)d<<endl;
    cout<<"The value of 33.3 is "<<sizeof(33.3)<<endl;
    cout<<"The value of 33.3f is "<<sizeof(33.3f)<<endl;
    cout<<"The value of 33.3l is "<<sizeof(33.3l)<<endl;
    cout<<"The value of sum is "<<d + int(e)<<endl;
    cout<<endl;

//float & y = x for reference variable


    return 0;
}

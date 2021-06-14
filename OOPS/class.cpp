#include <bits/stdc++.h>
using namespace std;

class geek{
    public:
    //data member
    string name;

    //member function
    void printName(){
        cout<<"The biggest geek is "<<name;
    }
};

int main(){
    //declaring an object of class
    geek a; 

    // accessing data member
    a.name = "Anni";

    //accessing data function
    a.printName();

    return 0;
}
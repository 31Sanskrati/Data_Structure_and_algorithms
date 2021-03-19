#include <iostream>
using namespace std;

//for storing  different types of entites unlike in case of array
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;
//typedef and ep for replacing struct employee by ep like below
int main(){
    ep anni;
    struct employee nanu;

    anni.eId = 1;
    anni.favChar = 'c';
    anni.salary = 130000;
    nanu.eId = 2;
    nanu.favChar = 'v';
    nanu.salary = 13456;
    cout<<"The value is "<<anni.eId<<endl;
    cout<<"The value is "<<anni.favChar<<endl;
    cout<<"The value is "<<anni.salary<<endl;
    cout<<"The value is "<<nanu.eId<<endl;
    cout<<"The value is "<<nanu.favChar<<endl;
    cout<<"The value is "<<nanu.salary<<endl;
    return 0;
}
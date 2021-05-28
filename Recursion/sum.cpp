#include <iostream>
using namespace std;
//This program claculates the sum till n using recursion

int sum(int n){
    if(n==0){
        return 0;
    }
    int lastsum = sum(n-1); // calling the same function again
    return lastsum + n;
}

int main(){
    cout<<"Enter a number";
    int n;
    cin>>n;
    cout<<"The sum is "<<sum(n);
    return 0;
}
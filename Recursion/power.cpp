#include <iostream>
using namespace std;

int power(int n, int p){
    if(p == 0){
        return 1;
    }
    int pervPower = power(n, p-1); 
    return pervPower*n;
}

int main(){
    int n, p;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"Enter the power ";
    cin>>p;
    
    cout<<power(n,p);

    return 0;
}
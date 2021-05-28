#include <iostream>
using namespace std;
//Get bit --> fint bit at some position of the number

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
    //all 0s means at position n is also zero 
}
int main(){

    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    
    cout<<"Enter the postion"<<endl;
    int pos;
    cin>>pos;

    cout<<getBit(n, pos)<<endl;
    return 0;
}
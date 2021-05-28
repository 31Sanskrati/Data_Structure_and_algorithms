#include <iostream>
using namespace std;

//cleat a bit at a position

int clearBit(int n, int pos){
    int mask = (~(1<<pos));
    return (n & mask); //return a number
}
int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    
    cout<<"Enter the postion"<<endl;
    int pos;
    cin>>pos;

    cout<<clearBit(n, pos)<<endl;
    return 0;
}
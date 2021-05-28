#include <iostream>
using namespace std;

int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    int clear = n & mask;
    return n | (value<<pos);
}
int main(){
    int n, pos, value;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    cout<<"Enter the postion"<<endl;
    cin>>pos;

    cout<<"Enter the value you want to update to 0 or 1"<<endl;
    cin>>value;
    cout<<updateBit(n, pos, value)<<endl;
    return 0;
}
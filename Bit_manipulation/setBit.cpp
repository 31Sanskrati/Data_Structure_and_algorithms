#include <iostream>
using namespace std;

//setBit --> set 1 at a position

int setBit(int n, int pos){
    return (n | (1<<pos)); //return number after setBit
}
int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    
    cout<<"Enter the postion"<<endl;
    int pos;
    cin>>pos;

    cout<<setBit(n, pos)<<endl;
    return 0;
}
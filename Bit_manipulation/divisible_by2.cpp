#include <iostream>
using namespace std;
//Check the number is power by 2 by bit manipulation
//If clearly noticed n and n-1 has the ones compliment untill 1 has been reached like 8 is 1000 and 7 is 0111
//And if we & both of them if a number is power of 2 than 0 is return
bool powerOf2(int n){
    int num1 = n;
    int num2 = n-1;
    return (n && (num1 & num2));
}

int main(){
    int n;
    cin>>n;
    if(powerOf2(n) == 0){
        cout<<n<<" is power of 2"<<endl;
    }
    else{
        cout<<"Not a power";
    }
    return 0;
}
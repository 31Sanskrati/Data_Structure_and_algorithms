#include <iostream>
using namespace std;

void printTillN(int n){
    //base case
    if(n==0){
        return;
    }
    //work
    cout<<n<<" ";
    //recursive call
    printTillN(n-1);
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    printTillN(n);
}
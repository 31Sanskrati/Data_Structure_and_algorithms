#include <iostream>
using namespace std;
//Program to count how many 1s are present in its binary form
int count(int n){
    int res = 0;
    while(n != 0){
        //n and n-1 has the same bits except the rightmost one
        n = n & (n-1);
        res++;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;
}
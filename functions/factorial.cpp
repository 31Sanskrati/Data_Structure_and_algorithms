#include <iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i=2; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n1, n2;
    cin>>n1>>n2;
    int fact1 = factorial(n1);
    cout<<fact1<<endl;
    int fact2 = factorial(n2);
    cout<<fact2<<endl;
    return 0;
}
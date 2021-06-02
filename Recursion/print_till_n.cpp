#include <iostream>
using namespace std;

void printtill(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printtill(n-1);
}

int main(){
    int n;
    cin>>n;
    printtill(n);
    return 0;
}
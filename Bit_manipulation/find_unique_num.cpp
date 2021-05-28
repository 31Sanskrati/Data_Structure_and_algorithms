#include <iostream>
using namespace std;

int uniqueNum(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main(){
    int arr[7] = {2,4,6,3,4,6,2};
    cout<<uniqueNum(arr, 7);
    return 0;
}
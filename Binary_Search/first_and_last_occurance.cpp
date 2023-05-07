#include <iostream>
using namespace std;

void firstOccur(int arr[], int n, int x){
    int l = 0;
    int h = n;
    while(l < h){
        int m = l + (h-l)/2;
        if(arr[m] < x){
            l = m + 1;
        }
        else{
            h = m;
        }
    }
    cout<<l<<endl;
}

void lastOccur(int arr[], int n, int x){
    int l = 0;
    int h = n;
    while(l < h){
        int m = l + (h-l)/2;
        if(arr[m] > x){
            h = m - 1;
        }
        else{
            l = m;
        }
    }
    cout<<l<<endl;
}

int main(){
    int arr[10] = {1,1,1,2,4,6,7,8,9,10};
    cout<<"First occurance: ";
    firstOccur(arr,10,1);
    cout<<"Last occurance: ";
    lastOccur(arr,10,1);
    return 0;
}
#include <iostream>
using namespace std;
//This program generates all subset of a set
void subsets(int n, int arr[]){

    for(int i =0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if( i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter numbers of elements in set";
    cin>>n;

    int set[n];
    cout<<"Enter the elements";
    for(int i = 0; i<n ;i++){
        cin>>set[i];
    }
    subsets(n, set);
    return 0;
}
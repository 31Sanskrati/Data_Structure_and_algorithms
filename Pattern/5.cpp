#include <iostream>
using namespace std;

int main(){
    int e, f;
    int rows = 5, cols = 9;
    for(int i = 0; i<rows; i++){
        f = i*2 - 1;
        e = (cols - f)/2;
        for(int i = 0; i<e; i++){
            cout<<" ";
        }
        for(int i = 0; i<f; i++){
            cout<<"*";
        }
        for(int i = 0; i<e; i++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
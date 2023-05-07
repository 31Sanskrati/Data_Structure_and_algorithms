#include <iostream>
using namespace std;

int main(){
    int e, f;
    int rows = 5, cols = 5;
    for(int i = 0; i<rows; i++){
        f = i+1;
        e = cols - f;
        for(int i = 0; i<e; i++){
            cout<<"   ";
        }
        for(int i = 0; i<f; i++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
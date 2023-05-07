#include <iostream>
using namespace std;

int main(){
    int col = 5;
    for(int row = 0; row<5; row++){
        for(int i = 0; i<col; i++){
            cout<<i+1;
        }
        col--;
        cout<<endl;
    }
    return 0;
}
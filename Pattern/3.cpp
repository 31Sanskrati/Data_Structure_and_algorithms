#include <iostream>
using namespace std;

int main(){
    int row = 10;
    int col = 1;
    for(int i = 1; i<row; i++){
        if(i < 5){
        for(int j = 0; j<col; j++){
            cout<<"*";
        }
        col++;
        }
        else{
            for(int j = 0; j<col; j++){
            cout<<"*";
        }
        col--;
        }
        cout<<endl;
    }
    return 0;
}
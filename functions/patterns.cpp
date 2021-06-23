#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the num of rows\n";
    cin >> row;
    cout << "Enter the num of columns\n";
    cin >> col;
for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << "* ";
        }
        col--;
        cout<<"\n";
    }
    //solid rectangle
    /*for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << "* ";
        }
        cout << "\n"; 
    }

//hollow rectangle
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(i==0 || i==(row-1) || j==0 || j==(col-1)){
                cout << "* ";
            }
            else{
                cout <<" ";
            }
        }
        cout<<"\n";
    }

//inverted half pyramid
    

//full pyramid
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(i+j<(row+col)/2){
                cout << " ";
            }
            else{
                cout << "* ";
            }
        }

//half pryamid of numbers
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j < (row + col) / 2)
            {
                cout << " ";
            }
            else
            {
                cout << i;
            }
        }
        cout << "\n";
    }*/
    return 0;
}
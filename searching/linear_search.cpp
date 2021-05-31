#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of terms you want to store" << endl;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number" << endl;
        cin >> num[i];
    }

    int num_check;
    cout<<"Enter a number which you want to find ";
    cin>>num_check;
    for(int i = 0; i<n; i++){
        if(num_check == num[i]){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
    }
    return 0;
}
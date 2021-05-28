//Program to check a word is palindrome or not
#include <iostream>
using namespace std;


int main()
{
    //taking input
    int n;
    cin>>n;

    char name[n];
    cout<<"Enter a word\n";
    cin >> name;

//checking palindrome
    bool check = 1;
    for(int i = 0; i <n; i++){
        if(name[i] != name[n-1-i]){
            check = 0;
        }
    }

    //output
    if(check){
        cout<<name<<" is PALINDROME";
    }
    else{
        cout<<"nope";
    }
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str = "auieWoGrdgr";
    //difference between 'a' & 'A' is 32

//toUpperCase
    for(int i = 0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
                str[i] -= 32;
        }
    }
    cout<<str<<endl;

//toLowerCase
    for(int i = 0; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z'){
                str[i] += 32;
        }
    }
    cout<<str<<endl;

//shortcut to do the above 
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    return 0;
}
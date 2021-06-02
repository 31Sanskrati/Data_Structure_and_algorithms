#include <iostream>
using namespace std;

//Remove duplicate character who are side to side using recursion 

string removeDuplicate(string s){
    if(s.length() == 0){  //base case
        return "";
    }
    char ch = s[0];

    string rest_of_string = removeDuplicate(s.substr(1));

    if(ch == rest_of_string[0]){
        return rest_of_string;
    }
    return (ch + rest_of_string);
} 

int main(){
    string ans = removeDuplicate("xxxAnniiJaixn");
    cout<<ans;
    return 0;
}
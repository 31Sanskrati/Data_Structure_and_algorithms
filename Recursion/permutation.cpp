#include <iostream>
using namespace std;

//This program is to calculate permutation of a string

void permutation(string s, string ans){
    if(s.length() == 0){ //base case
        cout<<ans<<endl;
        return;
    }
    for(int i = 0; i<s.length(); i++){
        char ch = s[i]; //fix one 
        string ros = s.substr(0, i) + s.substr(i+1); //rest of string
        permutation(ros, ans+ch);
    }

}

int main(){
    permutation("ABC", "");
    return 0;
}
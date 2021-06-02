#include <iostream>
#include <string>
using namespace std;

//reverse a string

void reverseString(string s){
    if(s.length() == 0){
        return;
    }
    string rest_of_string = s.substr(1);
    reverseString(rest_of_string);
    cout<<s[0];
}

int main(){
    reverseString("AnniJain");
    return 0;
}
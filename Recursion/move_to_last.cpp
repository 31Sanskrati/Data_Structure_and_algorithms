#include <iostream>
using namespace std;

//Move a char i.e 'x' to last of the string

string moveToLast(string s){
    if(s.length() == 0){
        return "";
    }
    char sh = s[0];
    string rest_of_string = moveToLast(s.substr(1));

    if(sh == 'x'){
        return rest_of_string + sh;
    }
    return sh +rest_of_string;
}

int main(){
    string ans = moveToLast("xxxAnxniJaixn");
    cout<<ans;
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Finding the highest frequency alphabet in a comment

int main(){
    //input for checking frequency
    cout<<"Enter a comment";
    string comment;
    getline(cin, comment);

    int freq[26] = {0};
    
    for(int i = 0; i<comment.size(); i++){
        freq[comment[i]-'a']++;
    }

    //checking the maximum frequency
    char ans = 'a';
    int maxF = 0;

    for(int i = 0; i<26; i++){
        if(maxF < freq[i]){
            maxF = freq[i];
            ans = i+'a';
        }
    }
    cout<<"Highest Frequency is "<<maxF<<" and the alphabet is "<<ans<<endl;
    return 0;
}
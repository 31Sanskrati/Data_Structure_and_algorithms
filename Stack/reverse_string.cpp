#include <iostream>
#include <stack>
using namespace std;

//this program is to reverse a string using stack

void reverseString(string s)
{
    stack<string> sta;

    for (int i = 0; i < s.length(); i++)
    {
        // storing a word in string to push
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        //pushing every word in stack
        sta.push(word);
    }

    // print the reverse string
    while (!sta.empty())
    {
        cout << sta.top() << " ";
        sta.pop();
    }
    cout << endl;
}

int main()
{
    string s = "How you doin!!";
    reverseString(s);
    return 0;
}
#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

//In this program we are solving a expresion given in string using postfix and stack

int postfixEvaluation(string s){
    //create stack
    stack<int> num;

    //checking string
    for(int i =0; i<s.length(); i++){
        //if s[i] is a number
        if(s[i]>='0' && s[i]<='9'){
            num.push(s[i] - '0');
        }
        //if s[i] is operater
        else{
            int num2 = num.top();
            num.pop();
            int num1 = num.top();
            num.pop();

            switch (s[i])
            {
            case '+':
                num.push(num1 + num2);
                break;
            case '-':
                num.push(num1 - num2);
                break;
            case '*':
                num.push(num1 * num2);
                break;
            case '/':
                num.push(num1 / num2);
                break;
            case '^':
                num.push(pow(num1, num2));
                break;
            default:
                break;
            }
        }
    }
    return num.top();
}

int main(){
    cout<<postfixEvaluation("46+2/5*7+")<<endl;
    return 0;
}
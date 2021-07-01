#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

//In this program we are solving a expresion given in string using prefix and stack

int prefixEvalution(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        // If there is a operand push it in stack
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }

        //it there is a operator
        else
        {
            // Take two last numbers
            int num1 = st.top();
            st.pop();
            int num2 = st.top();
            st.pop();

            //perform the operation 
            switch (s[i])
            {
            case '+':
                st.push(num1 + num2);
                break;
            case '-':
                st.push(num1 - num2);
                break;
            case '*':
                st.push(num1 * num2);
                break;
            case '/':
                st.push(num1 / num2);
                break;
            case '^':
                st.push(pow(num1, num2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout<<prefixEvalution("-+7*45+20");
    return 0;
}

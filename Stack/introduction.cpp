#include <iostream>
using namespace std;

// Starting with stack
// this program contains the code of push poop top and empty without using stack file

#define n 50

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1; 
        // top will store the index of the last element or -1 for no element is present
    }

    // push x in the stack
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    //removes the last element
    void pop()
    {
        // here the top element is not removed, we have just finished our array a tem before
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    // returns the element present at last or top
    int lastTerm()
    {
        if (top == -1)
        {
            cout << "No element is present" << endl;
        }

        return arr[top];
    }

    //to check if stack is empty or not
    bool empty()
    {
        return top == -1;
    }
};

int main()
{

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.lastTerm() << endl; //5
    st.pop();
    cout << st.lastTerm() << endl; //4
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl; //1
    st.pop(); //No element to pop
    return 0;
}
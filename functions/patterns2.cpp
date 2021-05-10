#include <iostream>
#include <cmath>
using namespace std;

int main()
{
/*
//print 0s and 1s in half pyramid
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << "\n";
    }

//print parallalogram
    int row;
    cout << "Enter the value of row for parallelogram\n";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int s = 0; s < (row - i); s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= row; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }

//print spade
    int no_row;
    cout << "Enter the num of rows for spade\n";
    cin >> no_row;
    for (int i = 1; i <= row; i++)
    {
        int j;
        for (int s = 0; s < (row - i); s++)
        {
            cout << "  ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "X ";
        }
        for (int s = 0; s < (row - i); s++)
        {
            cout << "  ";
        }
        
        cout << "\n";
    }
    for (int i = row; i >0; i--)
    {
        int j;
        for (int s = 0; s < (row - i); s++)
        {
            cout << "  ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "X ";
        }
        for (int s = 0; s < (row - i); s++)
        {
            cout << "  ";
        }
        
        cout << "\n";
    }

//reverse a number
    int num, reverse;
    cout<<"Enter a number to reverse\n";
    cin>>num;
    while (num>0)
    {
        int lastdigit = num%10;
        reverse = reverse*10 + lastdigit;
        num = num/10;
    }
    cout<<reverse;*/

//Armstrong or not
    int num2, sum=0;
    cout<<"Enter a number to check is it armstrong or not\n";
    cin>>num2;
    int original = num2;
    while (num2>0)
    {
        int lastdigit = num2%10;
        sum += pow(lastdigit,3);
        num2 = num2/10;
    }
    if(sum==original){
        cout<<"Your number "<<original<<" is a armstrong number";
    }
    else{
        cout<<"Not a armstrong number";
    }
    return 0;
}
#include <iostream>
using namespace std;

string spelling(int curr)
{
    if (curr == 1)
    {
        return "One ";
    }
    else if (curr == 2)
    {
        return "Two ";
    }
    else if (curr == 3)
    {
        return "Three ";
    }
    else if (curr == 4)
    {
        return "Four ";
    }
    else if (curr == 5)
    {
        return "Five ";
    }
    else if (curr == 6)
    {
        return "Six ";
    }
    else if (curr == 7)
    {
        return "Seven ";
    }
    else if (curr == 8)
    {
        return "Eight ";
    }
    else if (curr == 9)
    {
        return "Nine ";
    }
    else if (curr == 0)
    {
        return "Zero ";
    }
}

void printSpelling(int n)
{
    n = n / 10;
    string s = "";
    if (n < 1)
    {
        s = s + spelling(n % 10);
        return;
    }
    int curr = n % 10;
    s = s + spelling(curr);
    printSpelling(n);
    cout << s;
}

int main()
{
    printSpelling(120);
}
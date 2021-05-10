#include <iostream>
#include <math.h>
using namespace std;

bool phythagorian(int a, int b, int c)
{
    int x, y, z;

    //Assigning valus to x , y and z
    x = max(a, max(b, c));
    if (x == a)
    {
        y == b;
        z == c;
    }
    else if (x == b)
    {
        y == a;
        z == c;
    }
    else
    {
        y == a;
        z == b;
    }
    int sqr = x * x;

    //Checking phythagorian triplet
    if (sqr == (y * y + z * z))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int a, b, c;
    cout << "Enter three numbers \n";
    cin >> a >> b >> c;
    if (phythagorian(a, b, c))
    {
        cout << "phythagorian triplet";
    }
    else
    {
        cout << "Nope";
    }
    return 0;
}
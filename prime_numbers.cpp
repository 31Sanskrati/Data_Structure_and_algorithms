#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n1)
{
    for (int i = 2; i <= sqrt(n1); i++)
    {
        if (n1 % i == 0)
        {
            return false;
        }
        else{
            return true;
        }
    }
}
    int main()
    {
        int n1, n2;
        cout << "Enter two numbers\n";
        cin >> n1 >> n2;

        for (int i = n1; i <= n2; i++)
        {
            if (isprime(i))
            {
                cout << i <<endl;
            }
        }

        return 0;
    }
#include <iostream>
using namespace std;

int OctToDec(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}
int decToOct(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;
    }
    return ans;
}
int main()
{
    //octal to decimal
    int num2;
    cout << "Octal to Decimal conversion\n";
    cin >> num2;
    cout << num2 << " --> " << OctToDec(num2);
    cout << endl;

    //decimal to octal
    int num3;
    cout << "Decimal to Octal conversion\n";
    cin >> num3;
    cout << num3 << " --> " << OctToDec(num3);
    cout << endl;

    return 0;
}
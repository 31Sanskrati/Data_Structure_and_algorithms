#include <iostream>
using namespace std;

int HexToDec(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.size();
    for (int i = (s - 1); i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x*(n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
string DecToHex(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 16;
        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    //Hexa to decimal
    string num3;
    cout << "Hexadec to deci conversion\n";
    cin >> num3;

    cout << num3 << " --> " << HexToDec(num3);
    cout << endl;

    //decimal to hexadecimal
    int n3;
    cout << "decimal to hexadecimal conversion\n";
    cin >> n3;
    cout << n3 << " --> " << DecToHex(n3);
    cout << endl;
    return 0;
}
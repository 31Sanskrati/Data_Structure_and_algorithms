#include <iostream>
using namespace std;

int BinaryToDec(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

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

int HexToDec(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 16;
        ans += x * y;
        x *= 16;
        n /= 10;
    }
    return ans;
}

void decToBinary(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
}

void decToOct(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 8;
        n = n / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
}
void decToHex(int n){

}

int main()
{

    //binary to deci
    int num;
    cout << "binary to deci conversion\n";
    cin >> num;
    cout << num << " --> " << BinaryToDec(num);
    cout << endl;

    //octal to decimal
    int num2;
    cout << "octal to deci conversion\n";
    cin >> num2;
    cout << num2 << " --> " << OctToDec(num2);
    cout << endl;

    //Hexa to decimal
    int num3;
    cout << "Hexadec to deci conversion\n";
    cin >> num3;

    cout << num3 << " --> " << HexToDec(num3);
    cout << endl;

    //decimal to binary
    int n1;
    cout << "deci to binary conversion\n";
    cin >> n1;
    decToBinary(n1);
    cout << endl;

    //decimal to octal
    int n2;
    cout << "deci to octal conversion\n";
    cin >> n2;
    decToOct(n2);
    cout << endl;

    //decimal to hexadecimal
    int n3;
    cout << "decimal to hexadecimal conversion\n";
    cin >> n3;
    decToHex(n3);
    cout << endl;

    return 0;
}
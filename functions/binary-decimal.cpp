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
int main()
{
    //binary to deci
    int num;
    cout << "binary to deci conversion\n";
    cin >> num;
    cout << num << " --> " << BinaryToDec(num);
    cout << endl;

    //decimal to binary
    int n1;
    cout << "deci to binary conversion\n";
    cin >> n1;
    decToBinary(n1);
    cout << endl;
    
    return 0;
}
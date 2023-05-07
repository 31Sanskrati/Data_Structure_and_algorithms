#include <iostream>
using namespace std;

void binary_search(int arr[], int n, int l, int h, int x)
{
    if (l >= h)
    {
        cout << "CANT FIND IT!!";
        return;
    }
    int m = l + (h - l) / 2;
    if (arr[m] == x)
    {
        cout << "FOUND IT!!\n";
        cout << arr[m];
        return;
    }
    else if (arr[m] < x)
    {
        binary_search(arr, n, m + 1, h, x);
    }
    else
    {
        binary_search(arr, n, l, m - 1, x);
    }
}

int main()
{
    int x;
    cin >> x;
    int arr[5] = {1, 2, 3, 4, 5};
    binary_search(arr, 5, 0, 5, x);
    return 0;
}
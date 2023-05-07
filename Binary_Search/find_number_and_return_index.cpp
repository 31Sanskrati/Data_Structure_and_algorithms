#include <iostream>
using namespace std;

// given an array return the index of a particular number

// binary search
int binary_search(int arr[], int n, int x)
{
    int l = 0;
    int h = n;

    while (l < h)
    {
        int m = (l + h) / 2;
        // m = l + (h-l)/2; if both l and h are of max size then to avoid overflow
        if (arr[m] == x)
        {
            return m;
        }
        else if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            h = m;
        }
    }
    return l; // return the lower index
}

int main()
{
    cout << "enter n\n";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter numbers\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter x\n";
    int x;
    cin >> x;

    cout << binary_search(arr, n, x);
    return 0;
}
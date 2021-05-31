#include <iostream>
using namespace std;

int BinarySearch(int n, int arr[], int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter number of terms you want to store" << endl;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number" << endl;
        cin >> num[i];
    }
    int key;
    cout << "Fint the number ";
    cin >> key;

    cout << BinarySearch(n, num, key) << "th term";
    return 0;
}
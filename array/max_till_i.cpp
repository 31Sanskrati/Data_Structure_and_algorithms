#include <iostream>
using namespace std;

int main()
{
    //input
    int n;
    cout << "Enter number of terms" << endl;
    cin >> n;
    int arr[n];
    int maxArr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number" << endl;
        cin >> arr[i];
    }

    //maximim till ith element
    for (int i = 1; i < n; i++)
    {
        maxArr[0] = arr[0];
        maxArr[i] = max(arr[i], maxArr[i-1]);
    }

    //output
    for (int i = 0; i < n; i++)
    {
        cout << maxArr[i] << " ";
    }
    return 0;
}
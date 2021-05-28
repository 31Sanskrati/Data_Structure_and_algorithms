#include <iostream>
using namespace std;

int main()
{
    //input
    int n;
    cout << "Enter number of terms" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number" << endl;
        cin >> arr[i];
    }

    //sum of subarrays
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }

    return 0;
}
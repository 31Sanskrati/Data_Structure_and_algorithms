#include <iostream>
#include <climits>
using namespace std;

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
    int max_term = INT_MIN;
    int min_term = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        max_term = max(max_term, num[i]);
        min_term = min(min_term, num[i]);
    }

    cout << "Maximum term " << max_term << endl;
    cout << "Minimum term " << min_term << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct activity
{
    int start, finish;
};

bool compare(activity s1, activity s2)
{
    return s1.finish < s2.finish;
}

void selection(activity arr[], int n)
{
    sort(arr, arr + n, compare);
    int i = 0;
    cout << "Activities selected are \n";

    cout << arr[i].start << " " << arr[i].finish << "\n";
    for (int j = 1; j < n; j++)
    {
        if (arr[j].start >= arr[i].finish)
        {
            cout << arr[j].start << ", " << arr[j].finish << "\n ";
            i = j;
        }
    }
}

int main()
{
    activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6},
                                       {5, 7}, {8, 9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection(arr, n);
    return 0;
}
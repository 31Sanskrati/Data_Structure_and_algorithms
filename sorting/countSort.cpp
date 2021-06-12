#include <iostream>
using namespace std;

//This program is based on count sort

void countSort(int arr[], int n)
{

    int maxofarr = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxofarr = max(arr[i], maxofarr);
    }

    //counting the frequency of every element
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    //modify count array
    for (int i = 0; i <= maxofarr; i++)
    {
        count[i] += count[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{

    int arr[] = {1, 3, 7, 5, 8, 8, 3, 2, 1, 1, 1};

    countSort(arr, 11);

    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
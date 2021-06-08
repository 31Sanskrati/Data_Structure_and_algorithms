#include <iostream>
using namespace std;

//this program deals with sorting technique called merge sort

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    //temperory array
    int a[n1];
    int b[n2];

    //assigning values to temporary array
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    //comparing elements of two sorted erray and combining them using two pointer
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[i])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        //dividing arr into two arrays untill it become easier to solve
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        //merging those sorted array
        merge(arr, l, mid, r);
    }
}

int main()
{
    //input
    cout << "Enter number of elements you wanr to sort";
    int n;
    cin >> n;

    cout << "Enter numbers";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //calling function
    mergeSort(arr, 0, n - 1);

    //output
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
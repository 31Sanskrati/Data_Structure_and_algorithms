#include <iostream>
using namespace std;

//Wave Sort --> a[0] > a[1] < a[2] > a[3] < a[4] ...

void swap(int arr[], int i, int j)
{
    //swaping two numbers
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void waveSort(int arr[], int n)
{

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr, i, i - 1);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr, i, i + 1);
        }
    }
}

int main()
{

    int arr[] = {2, 7, 4, 8, 9, 6, 4, 3, 2, 1};

//calling function
    waveSort(arr, 10); 

//output
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
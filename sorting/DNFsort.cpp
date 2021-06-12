#include <iostream>
using namespace std;

// 0000 1111 2222

void swap(int arr[], int i, int j)
{
    //swaping between two numbers
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnfsort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr, mid, high);
            high--;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 2, 1, 0, 2, 2, 0, 0, 1, 2, 1};

    dnfsort(arr, 12);

    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

//this program is about quick sort

int partition(int arr[], int left, int right) //return final position of pivot
{
    int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
    while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  swap(arr[i], arr[j]);
                  i++;
                  j--;
            }
      }
      return i;
}

void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pi = partition(arr, left, right);
            quickSort(arr, left, pi - 1);
            quickSort(arr, pi, right);
    }
}

void print(int arr[]){
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int arr[8] = {2,8,7,1,3,5,6,4};
    print(arr);
    quickSort(arr, 0, 7);
    print(arr);
    return 0;
}
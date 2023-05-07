#include <iostream>
using namespace std;

int reverse_binary_search(int arr[], int n, int x){
    int l = 0;
    int h = n;

    while (l < h)
    {
        int m = (l + h) / 2;
        // m = l + (h-l)/2; if both l and h are of max size then to avoid overflow
        if (arr[m] == x)
        {
            return m;
        }
        else if (arr[m] < x)
        {
            h = m;
        }
        else
        {
            l = m + 1;
        }
    }
    return l; // return the lower index
}

int main(){
    int x;
    cin >> x;
    int arr[5] = {9,7,5,3,1};
    cout<<reverse_binary_search(arr, 5, x);
    return 0;
}
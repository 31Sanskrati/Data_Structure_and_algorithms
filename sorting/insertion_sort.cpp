#include <iostream>
using namespace std;

int main()
{

    //input
    int n;
    cout << "Enter number of terms" << endl;
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number" << endl;
        cin >> num[i];
    }

    //Insertion sort
    for (int i = 1; i < n; i++)
    {
        int current = num[i];
        int j = i - 1;
        while (num[j] > current && j >= 0)
        {
            num[j + 1] = num[j];
            j--;
        }
        num[j+1] = current;
    }

    //output
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}
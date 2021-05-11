#include <iostream>
using namespace std;

int main()
{
    //input
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " number" << endl;
        cin >> num[i];
    }

    //selection sort
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (num[i] > num[j])
            {
                int arr = num[i];
                num[i] = num[j];
                num[j] = arr;
            }
        }
    }
    
    //output
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}
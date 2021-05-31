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
    
    //Bubble sort
    int counter = 0;
    while (counter < n - 1)
    {
        for (int i = 0; i < (n - counter - 1); i++)
        {
            if (num[i] > num[i + 1])
            {
                int temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
        }
        counter++;
    }

    //output
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}
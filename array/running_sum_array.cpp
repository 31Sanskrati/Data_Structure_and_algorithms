#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of terms you want to store" << endl;
    cin >> n;
    int num[n];
    int result[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " number" << endl;
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        result[i] = result[i-1]+num[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i]<<" ";
    }
    return 0;
}
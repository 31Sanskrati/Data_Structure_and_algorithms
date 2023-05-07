#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of denomination\n";
    cin >> n;

    cout<<"Enter all denomination like 1,2,5,10,20...\n";
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    //change we want
    int x;
    cout<<"Enter the number that you want change for\n";
    cin >> x;
    
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans += x/a[i];
        x -= x/a[i]*a[i]; //to find remainder
    }

    cout<<"The minimum number of denomination required "<<ans<<endl;
    return 0;
}
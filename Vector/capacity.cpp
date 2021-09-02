#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    cout<<vec.max_size()<<endl; //2305843009213693951

    for (int i = 1; i<=5; i++){
        vec.push_back(i);
    }
    cout<<vec.size()<<endl; //5
    cout<<vec.capacity()<<endl; //8
    cout<<vec.empty()<<endl; //0
}
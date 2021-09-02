#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout<<endl;
}

int main()
{
	vector<int> v;
    v.assign(8, 2);
    cout << "The vector elements are: ";
    print(v); //2 2 2 2 2 2 2 2 
    v.push_back(10);
    print(v); //2 2 2 2 2 2 2 2 10
    v.pop_back();
    v.insert(v.begin(), 0);
    print(v); //0 2 2 2 2 2 2 2 2
    
    return 0;
}
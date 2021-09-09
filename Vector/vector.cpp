#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> number;
    number.push_back(3);
    number.push_back(2);
    number.push_back(1);

    for(int i = 0; i<number.size(); i++){
        cout<<number[i]<<" "; //  3 2 1 
    }
    cout<<endl;

    //iterator
    vector<int>::iterator it;
    for(it = number.begin(); it != number.end(); it++){
        cout<<*it<<" "; 
    } // 3 2 1
    cout<<endl;

    //for each loop
    for(auto element : number){
        cout<<element<<" ";
    }

    number.pop_back(); // 3 2 

    return 0;
}
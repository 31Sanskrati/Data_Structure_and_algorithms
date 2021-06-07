#include <iostream>
using namespace std;

//this program deals with the calculation of the number of ways of reaching a particular destination
//and the number of steps taken at a time is from 1-6
int paths(int str, int des){
    if(str == des){
        return 1;
    }
    if(str>des){
        return 0;
    }

    int count = 0;
    for(int i = 0; i<=6; i++){
        count =  count + paths(str+i, des);
    }
    return count;
}

int main(){
    cout<<paths(0, 3)<<endl;
    return 0;
}
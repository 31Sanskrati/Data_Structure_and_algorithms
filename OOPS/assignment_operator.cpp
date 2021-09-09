#include<iostream> 
#include<stdio.h> 
  
using namespace std; 
  
class Test 
{ 
    public: 
    Test() {} 
    Test(const Test &t) 
    { 
        cout<<"Copy constructor called "<<endl; 
    } 
      
    Test& operator = (const Test &t)
    {
        cout<<"Assignment operator called "<<endl;
        return *this;
    } 
}; 
  
// Driver code
int main() 
{ 
    Test t1, t2; 
    t2 = t1; //calling assignment operator
    Test t3 = t1; //calling copy operator
    getchar(); 
    return 0; 
}

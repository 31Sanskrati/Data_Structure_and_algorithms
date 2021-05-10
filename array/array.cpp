#include <iostream>
using namespace std;

int main()
{
    //Array --> used to store data in coontiguous memory allocation
    
    int num[] = {23, 657, 435, 2}; // or num[4]
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;
    cout << num[3] << endl;

    // int marks[3];
    // marks[0] = 12;
    // marks[1] = 34;
    // marks[2] = 0;
    // cout<<"The value of marks is\n";
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;

    // Output using for, while and do-while loops
    for (int i = 0; i < 3; i++)
    {
        cout << "The value of marks using for-loop" << i << " is " << num[i] << endl;
    }

    int i = 0;
    while (i < 4)
    {
        cout << "The value of num wsing while-loop" << i << " is " << num[i] << endl;
        i++;
    }

    do
    {
        cout << "The value of num " << i << " is " << num[i] << endl;
        i++;
    } while (i < 4);

    //Pointers in arrays
    int *p = num;
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of " << *(p + i) << endl;
    }

    return 0;
}
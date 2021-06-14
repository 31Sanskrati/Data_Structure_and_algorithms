#include <iostream>
using namespace std;

class student
{
    int age;

public:
    string name;

    //using private member in public function
    void setage(int num)
    {
        age = num;
    }

    void printdata()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    //creating object
    student arr[2];

    //input
    for (int i = 0; i < 2; i++)
    {
        cout << "Name : ";
        cin >> arr[i].name;

        //input in private member using function setage
        int num;
        cout << "Age : ";
        cin >> num;
        arr[i].setage(num);
    }

    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        arr[i].printdata();
    }

    return 0;
}
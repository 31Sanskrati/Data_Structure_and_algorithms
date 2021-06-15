#include <iostream>
using namespace std;

//this contains constructor, destructor and operators

class student
{

public:
    string name;
    int age;

    student(){
        cout<<"Default constructor"<<endl;
    }//default constructor

    student(int num, string s){
        cout<<"Paramaterised constructor"<<endl;
        name = s;
        age = num;
    } //constructor

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age = a.age;
    }//copy constructor

    void printdata()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

    //Destructor
    ~student(){
        cout<<"Destructor"<<endl;
    }

    bool operator == (student &a){
        if(name==a.name && age==a.age){
            return true;
        }
        return false;
    }
};

int main()
{
    student a(19, "Anni");
    //a.printdata();
    student b;
    student c = a;

    if(c == a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}
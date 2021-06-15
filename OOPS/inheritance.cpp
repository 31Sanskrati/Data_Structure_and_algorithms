#include <iostream>
using namespace std;

//base class
class grandpa
{
protected: //cannot be accessed or inherited
    void greatfunc()
    {
        cout << "Not for everyone\n";
    }

public: //can be accessed and inherited
    void grandfunc()
    {
        cout << "This is grandpa\n";
    }
};

//derived class
class papa : public grandpa
{
public:
    void papafunc()
    {
        cout << "This is papa" << endl;
    }
};

//base class
class mumma
{
public:
    void mamafunc()
    {
        cout << "This is mumma\n";
    }
};

//derived class
class child : public papa, private mumma
{
public:
    void childfunc()
    {
        cout << "This is child\n";
    }
};

int main()
{
    child ani;
    ani.grandfunc();
    ani.papafunc();
    //ani.mamafunc(); //cannot be accessed as mumma inheritance is stored in private
    ani.childfunc();
    
    return 0;
}
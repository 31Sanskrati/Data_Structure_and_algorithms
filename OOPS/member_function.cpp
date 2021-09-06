#include <iostream>
using namespace std;

class Cube
{
    public:
    int side;
    int getVolume();
};

int Cube ::getVolume()
{
    return side * side * side;
}

int main()
{
    Cube C1;
    cout << "Enter side\n";
    cin>>C1.side;
    cout<<"The volume of cude is "<<C1.getVolume();
    return 0;
}
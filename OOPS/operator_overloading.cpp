#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    //operator overloading   return_type operator name(arguments){}
    Complex operator +(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};

int main()
{
    Complex c1(5, 9);
    Complex c2(5, 11);
    c1.print();
    c2.print();
    Complex c3;
    /* c3 = c2 + c1; will not work without operator overloading
    operators present in c++ does not operate on objects i.e user defined data types
    as they do on primitive data types*/

    c3 = c1 + c2; // c1.add(c2) same analogy
    c3.print(); // 10 + 20i
    return 0;
}
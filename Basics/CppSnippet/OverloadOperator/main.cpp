/*
-----------------------------------------------------------------------
* Summary: simple C++ program

* Output:
5

-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class myClass {
    int a;
public:
    myClass () {};
    myClass (int);
    int getA() {return a;};
    myClass operator + (myClass);
    void print() {cout << a << endl;};
};

myClass::myClass(int aa)
{
    a = aa;
}

myClass myClass::operator+ (myClass c)
{
    myClass res(a+c.getA());
    return res;
}

int main ()
{
    myClass c1 (2);
    myClass c2 (3);
    myClass c3;
    c3 = c1 + c2;
    c3.print();
    return 0;
}

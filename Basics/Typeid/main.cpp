/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating typeid.

* Output:
Pi
i
2C1
2C2
P2C1
P2C2
2C1
2C2

-----------------------------------------------------------------------
*/

#include <iostream>
#include <typeinfo>
using namespace std;

class C1
{
    int c1;
};

class C2
{
    int c2;
};

int main ()
{
    int * a;
    int b;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;

    C1 c1;
    C2 c2;
    cout << typeid(c1).name() << endl;
    cout << typeid(c2).name() << endl;

    C1 * p1;
    C2 * p2;
    cout << typeid(p1).name() << endl;
    cout << typeid(p2).name() << endl;
    cout << typeid(*p1).name() << endl;
    cout << typeid(*p2).name() << endl;


    return 0;
}

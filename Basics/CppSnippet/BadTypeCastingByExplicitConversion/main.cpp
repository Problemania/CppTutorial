/*
-----------------------------------------------------------------------
* Summary: simple C++ program

* Output:
0
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class C1
{
    int a1;
public:
    C1(){a1 = 1;};
    void foobar() { cout << a1 << endl;}
};

class C2
{
    double a2;
public:
    C2(){a2 = 2;}
};

int main ()
{
    C2 c2;
    C1 * p1;
    p1 = (C1*) &c2;
    p1 -> foobar(); // it won't print a1 correctly

    return 0;
}

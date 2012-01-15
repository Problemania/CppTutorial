/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating static member of a class.

* Output:
4
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class C {
public:
    static int objCount;
    C () {objCount++;};
    void print () {cout << objCount;}
};

int C::objCount = 0;

int main ()
{
    C c [4];
//    c[1].print();
    cout << C::objCount << endl;
    return 0;
}

/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating type casting using implicit
conversion.

* Output:
b1 = 1
b2 = 1

-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class C2
{
    int b;
};

class C1
{
    int a;
public:
    C1 () { a = 1;};
    C1 (C2 c) {};
};

int main ()
{
    float a = 1.234;
    int b1, b2;
    b1 = (int) a;  // C-like type casting notation
    b2 = int (a);  // function notation
    cout << "b1 = " << b1 << endl;
    cout << "b2 = " << b2 << endl;

    C2 c2;
    C1 c1 = c2; // c2 is converted to c1 and the constructor C1(C2 c) can be
                // used by instantiating the object

    return 0;
}

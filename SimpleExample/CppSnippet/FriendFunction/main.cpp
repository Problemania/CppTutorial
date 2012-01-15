/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating friend function.

* Output:
1
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class C
{
    int value;
public:
    C();
    friend void foobar (C);
};

C::C()
{
    value = 1;
}

void foobar (C c)
{
    cout << c.value << endl;
}

int main ()
{
    C c;
    foobar(c);
    return 0;
}

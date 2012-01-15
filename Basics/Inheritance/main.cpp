/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating friend class.

* Output:
3
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;


class C2
{
    int value;
public:
    C2();
    friend class C1;
};

class C1
{
    int value;
public:
    C1();
    int addValue(C2);
};



C1::C1()
{
    value = 1;
}

int C1::addValue(C2 c2)
{
    return (c2.value + value);
}

C2::C2()
{
    value = 2;
}


int main ()
{
    C1 c1;
    C2 c2;
    cout << c1.addValue(c2) << endl;
    return 0;
}

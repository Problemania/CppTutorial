/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating type casting using
dynamic_cast.

* Output:
dynamic casting failed for p11
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class C1 {
public:
    virtual ~C1() {}
};

class C2:public C1
{
public:
    virtual ~C2(){}
    void foobar() {};
};


int main ()
{
    C1 c1;
    C2 c2;

    try
    {
        C1 * p11 = new C1;
        C1 * p12 = new C2;
        C2 * p2;

        p2 = dynamic_cast<C2*>(p11);
        if (p2 == 0)
        {
            cout << "dynamic casting failed for p11" << endl;
        };

        p2 = dynamic_cast<C2*>(p12);
        if (p2 == 0)
        {
            cout << "dynamic casting failed for p12" << endl;
        }

    }
    catch (exception& e)
    {
        cout << "exception: " << e.what() << endl;
    };

    return 0;
}

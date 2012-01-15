/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating that with polymorphism a
pointer to a parent class is type compatible with a pointer pointing to
its inherited classes.

* Output:
1
5

-----------------------------------------------------------------------
*/

#include <string>
#include <iostream>
using namespace std;


class C1 {
protected:
    int value;
public:
    C1(){value = 1;};

    /***
     * An explicitly defined destructor is necessary when there is some function
     * declared virtual. If
     * virtual ~C1(){}
     * is absent, it causes compilation warning
     * Class '[C@1a9e0f7' has virtual method 'area' but non-virtual destructor
     *
     * Ref:
     * http://stackoverflow.com/questions/1123044/when-should-your-destructor-be-virtual
     * http://stackoverflow.com/questions/8764353/what-does-has-virtual-method-but-non-virtual-destructor-warning-mean-durin/8764428#8764428
     */
    virtual ~C1(){};

    virtual int foobar (int) {return value;}

};

class C2: public C1
{
public:
    C2(){value = 2;};
    ~C2(){};
    int foobar (int a) {return (value + a);}
};

int main ()
{
    C1 c1;
    C2 c2;
    cout << c1.foobar(3) << endl;
    cout << c2.foobar(3) << endl;

    return 0;
}

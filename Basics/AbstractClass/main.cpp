/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating that with polymorphism a
pointer to a parent class is type compatible with a pointer pointing to
its inherited classes.

* Output:
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

    virtual ~C1(){};
    /**
     * A class with any member function declared pure virtual is an abstract class.
     * A pure virtual function is indicated by " = 0" and not having an implementation.
     */
    virtual int foobar (int) = 0;
    void printFoobar(){cout << this -> foobar(3) << endl;}

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
    /**
     * A virtual class can't have objects.
     * */
    // C1 c1;
    C2 c2;
    C1 * ptrC1;
    ptrC1 = &c2;
    ptrC1 -> printFoobar();

    return 0;
}

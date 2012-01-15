/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating using this keyword to test
if a member function calls the parent object itself. It also
demonstrates doing it by passing reference and by passing pointer.

* Output:
true
false
true
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
    bool isParent1 (const myClass &);
    bool isParent2 (myClass);
    bool isParent3 (myClass *);
    void print() {cout << a << endl;};
};

myClass::myClass(int aa)
{
    a = aa;
}

bool myClass::isParent1(const myClass &c)
{
    if (&c == this) {
        return true;
    } else {
        return false;
    }
}

bool myClass::isParent2(myClass c)
{
    if (&c == this) {
        return true;
    } else {
        return false;
    }
}

bool myClass::isParent3(myClass * c)
{
    if (c == this) {
        return true;
    } else {
        return false;
    }
}

int main ()
{
    myClass c1 (2);
    myClass * c2 = &c1;
    cout << boolalpha;
    cout << c2 -> isParent1(c1) << endl; // pass by reference
    cout << c2 -> isParent2(c1) << endl; // pass by value
    cout << c2 -> isParent3(&c1) << endl;// pass by pointer
    return 0;
}

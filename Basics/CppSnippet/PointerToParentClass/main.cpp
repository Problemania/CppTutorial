/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating that with polymorphism a
pointer to a parent class is type compatible with a pointer pointing to
its inherited classes.

* Output:
c1
c2

-----------------------------------------------------------------------
*/

#include <string>
#include <iostream>
using namespace std;


class C1 {
protected:
    string name;
public:
    C1(){name = "c1 name";};
    void setName(string n) {name = n;};
    string getName() {return name;}
};

class C2: public C1
{
    int value;
public:
    C2(){name = "c2 name"; value = 1;};
};

int main ()
{
    C1 c1;

    C2 c2;


    C1 * ptr1;
    ptr1 = &c1;
    ptr1 -> setName("c1");
    cout << ptr1 -> getName() << endl;

    /*
     * Pointer to a parent class is type-compatible with a pointer to its
     * inherited classes.
     *
     * Although ptr2 is declared as a pointer pointing to C1 class but, it
     * is subsequently assigned an memory address of an C2 class object.
     **/
    C1 * ptr2;
    ptr2 = &c2;
    ptr2 -> setName("c2");
    cout << ptr2 -> getName() << endl;


    /**
     * But the above is not reversible. I.e., A pointer to a derived class is
     * not type-compatible with a pointer to its parent class.
     **/
    C2 * ptr3;
    //ptr3 = &c1; // this causes error: invalid conversion from ‘C1*’ to ‘C2*’
                  // [-fpermissive]
    cout << ptr3 -> getName() << endl;



    return 0;
}

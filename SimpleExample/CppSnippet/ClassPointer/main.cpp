/*
-----------------------------------------------------------------------
* Summary: simple C++ program

* Output:
1
2
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class myClass {
    int a;

public:

    myClass ();
    myClass (int);
    void print () { cout << a << endl; }
};

myClass::myClass() {
    a = 1;
}

myClass::myClass(int aa) {
    a = aa;
}

int main ()
{

    myClass c1;
    myClass c2(2);
    myClass * ptr1;
    myClass * ptr2;
    ptr1 = new myClass; // invokes the default argumentless constructor
    ptr2 = &c2;

    /**
     * The following is invalid as a is a private member of myClass class.
     * */
    // cout << "c1.a = " << c1.a << endl;

    /* the arrow operator, pointer -> member function */
    ptr1 -> print();
    ptr2 -> print();

    return 0;
}

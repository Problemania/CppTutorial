/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating class constructor.

* Output:
2
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class MyClass {
    int a;

  public:
    MyClass ();    // default constructor without arguments; This is necessary
                   // otherwise "MyClass c1;" in main() will not work.
    MyClass (int); // constructor overloaded
    void print ();
};

MyClass::MyClass () {
    a = 1;
}

MyClass::MyClass (int aa) {
    a = aa;
}

void MyClass::print () {
    cout << a << endl;
}


int main ()
{
    MyClass c1;
    // It's wrong to do MyClass c1();

    c1.print();

    MyClass c2 (2);
    c2.print();

    return 0;
}

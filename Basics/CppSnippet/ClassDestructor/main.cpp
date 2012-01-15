/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating class destructor.

* Output:
2
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

class MyClass {
    int * a;
  public:
    MyClass (int); // constructor
    ~MyClass ();
    void print ();
};

MyClass::MyClass (int aa) {
    a = new int;
    *a = aa;
}
MyClass::~MyClass () {
    cout << "[DEBUG] Destructor called!" << endl;
    delete a;
}

void MyClass::print () {
    cout << "[DEBUG] MyClass::print () called!" << endl;
    cout << *a << endl;
}


int main ()
{
    int a = 2;
    MyClass c (a);
    c.print();
    return 0;
}

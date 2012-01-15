/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating class template.

* Output:
name = object 1
t = 1
name = object 2
t = 2.1
name = foobar
t = foobar

-----------------------------------------------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

template <class T>
class C {
    string name;
    T t;
public:
    C (T tt, string n) {
        t = tt;
        name = n;
    };
    void print()
    {
        cout << "name = " << name << endl;
        cout << "t = " << t << endl;
    }
};


template <>
class C<string> {
    string name;
    string t;
public:
    C (string tt) {
        t = tt;
        name = tt;
    };
    void print()
    {
        cout << "name = t = " << name << endl;
    };
};


int main ()
{
    C<int> o1(1, "object 1");
    C<double> o2(2.1, "object 2");
    C<string> o3("foobar");
    o1.print();
    o2.print();
    o3.print();

    return 0;
}

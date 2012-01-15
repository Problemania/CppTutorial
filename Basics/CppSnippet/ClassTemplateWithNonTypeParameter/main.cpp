/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating class template.

* Output:
name = object 1
t = 1
name = object 2
t = 2.1

-----------------------------------------------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

template <class T, int N>
class C {
    string name [N];
    T t;
public:
    C (T tt, string n) {
        t = tt;
        name [0] = n;
    };
    void print()
    {
        cout << "name = " << name[0] << endl;
        cout << "t = " << t << endl;
    };
};

int main ()
{
    C<int, 2> o1(1, "object 1");
    C<double, 2> o2(2.1, "object 2");
    o1.print();
    o2.print();

    return 0;
}

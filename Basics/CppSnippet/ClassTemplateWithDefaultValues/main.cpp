/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating class template with default
values.

* Output:
name[1] = object 1
t = 1
name[1] = object 2
t = 2.1
name[1] = object 3
t = x


-----------------------------------------------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

template <class T = char, int N = 2>
class C {
    string name[N];
    T t;
public:
    C (T tt, string n) {
        t = tt;
        name[1] = n;
    };
    void print()
    {
        cout << "name[1] = " << name[1] << endl;
        cout << "t = " << t << endl;
    };
};


int main ()
{
    C<int, 2> o1(1, "object 1");
    C<double, 2> o2(2.1, "object 2");
    C<> o3('x', "object 3");
    o1.print();
    o2.print();
    o3.print();

    return 0;
}

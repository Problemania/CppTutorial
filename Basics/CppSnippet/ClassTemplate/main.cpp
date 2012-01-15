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

template <class T>
class C {
    string name;
    T t;
public:
    C (T tt, string n) {
        t = tt;
        name = n;
    };
    void print();
};

template <class T>
void C<T>::print()
{
    cout << "name = " << name << endl;
    cout << "t = " << t << endl;
}

int main ()
{
    C<int> o1(1, "object 1");
    C<double> o2(2.1, "object 2");
    o1.print();
    o2.print();

    return 0;
}

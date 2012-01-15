/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating namespaces.

* Output:
1
2
1
2
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

namespace ns1 {
    int foo = 1;
}

namespace ns2 {
    int foo = 2;
}

int main ()
{
    cout <<  ns1::foo << endl;
    cout <<  ns2::foo << endl;
    namespace ns = ns1;
    using namespace ns;
    cout <<  foo << endl;
    cout <<  ns2::foo << endl;

    return 0;
}

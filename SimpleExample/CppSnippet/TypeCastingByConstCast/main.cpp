/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating type casting using
const_cast.

* Output:
foobar
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

void foobar (char * a) {
    cout << a << endl;
}

int main ()
{
    const char * x = "foobar";
//    foobar (x);
    foobar(const_cast<char *> (x));

    return 0;
}

/*
-----------------------------------------------------------------------
* Summary: simple C++ program

* Output:
x = 1
exception 1
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;


int foobar(float x) throw (int) // allow throw error of type int
// int foobar(float x) throw () // doesn't allow throw any error
// int foobar(float x)          // allow throw any type of error
{
    cout << "x = " << x << endl;
    throw 1;
};

int main ()
{
    try
    {
        foobar(1);
    }
    catch (int e)
    {
        cout << "exception " << e << endl;
    };
    return 0;
}

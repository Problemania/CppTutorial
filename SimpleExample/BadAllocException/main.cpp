/*
-----------------------------------------------------------------------
* Summary: simple C++ program

* Output:
bad_alloc exception occurred!
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main ()
{
    try
    {
        int * myArray = new int[10000000000000000];
    }
    catch (bad_alloc&)
    {
        cout << "bad_alloc exception occurred!" << endl;
    };
    return 0;
}

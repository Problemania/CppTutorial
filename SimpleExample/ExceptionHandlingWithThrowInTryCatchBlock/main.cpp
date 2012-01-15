/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating exception handling with
throw and try-catch block.

* Output:

-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main ()
{
    int a = 2;
    try
    {
        if (a > 1) {
            string s = "foobar"; throw s;
//            throw "foobar";
//            throw 1;
//            throw 'x';

        } else {
            throw 0;
        }
    }
    catch (int e)
    {
        cout << "integer exception: " << e << endl;

    }
    catch (char e)
    {
        cout << "character exception: " << e << endl;
    }
    catch (string& e)
    {
        cout << "string exception: " << e << endl;
    };

    cout << "After try-catch block" << endl;

    return 0;
}

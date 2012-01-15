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
        try
        {
            if (a > 1) {
                throw 1;

            } else {
                throw 'x';
            }
        }
        catch (int e)
        {
            cout << "integer exception: " << e << endl;
            throw;
        }
        catch (char e)
        {
            cout << "character exception: " << e << endl;
        }
        catch (string& e)
        {
            cout << "string exception: " << e << endl;
        }
    }
    catch (int e)
    {
        cout << "forwarded exception: " << e << endl;
    };

    cout << "After try-catch block" << endl;

    return 0;
}

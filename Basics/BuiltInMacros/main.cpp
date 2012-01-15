/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating built-in macros.

* Output:
__cplusplus = 1
current line number __LINE__ = 23
__FILE__ = main.cpp
__DATE__ = Jan  9 2012
__TIME__ = 01:05:05
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main ()
{
    /*
     * __cplusplus	An integer value. All C++ compilers have this constant defined to some value. If the compiler is fully compliant with the C++ standard its value is equal or greater than 199711L depending on the version of the standard they comply.
     */
    cout << "__cplusplus = " << __cplusplus << endl;

    /*
     * __LINE__	Integer value representing the current line in the source code file being compiled.
     */
    cout << "current line number __LINE__ = " << __LINE__ << endl;

    /*
     * 	__FILE__	A string literal containing the presumed name of the source file being compiled.
     */
    cout << "__FILE__ = " << __FILE__  << endl;

    /*
     * __DATE__	A string literal in the form "Mmm dd yyyy" containing the date in which the compilation process began.
     *
     */
    cout << "__DATE__ = " << __DATE__ << endl;


    /*
     * __TIME__	A string literal in the form "hh:mm:ss" containing the time at which the compilation process began.
     */

    cout << "__TIME__ = " << __TIME__ << endl;

    return 0;
}

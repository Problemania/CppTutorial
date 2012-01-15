/*
-----------------------------------------------------------------------
* Summary: simple C++ program

* Output:

-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

#ifndef MAX
#define MAX 100
#endif

#ifdef MAX
#define MIN MAX-10
#endif


#define str(x) #x

#define join(x,y) x##y

int main ()
{
    cout << "MAX = " << MAX << endl;
    cout << "MIN = " << MIN << endl;
    cout << str(foobar) << endl;     // str("foobar"), #x is string literal
    cout << join(mi,n)(1,2) << endl; // min(1,2), x##y for concatenation



/*
 * Generate compile error:
 * n ‘int main()’:my debug:30:10: error: expected initializer before ‘+’ token
 */
#line 30 "my debug"
    int x+1;

/**
 * Generate compile error:
 * my debug:34:2: error: #error "FOOBAR is not defined!"
 *
 */
#ifndef FOOBAR
#error "FOOBAR is not defined!"
#endif



    return 0;
}

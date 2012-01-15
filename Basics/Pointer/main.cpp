/*
-----------------------------------------------------------------------
* Summary: simple C++ program to demonstrate pointers.

* Output:
aAddr = 0x8048859
aAddr = 0xbf8348c0
aValue1 = 4
aValue2 = 4
*aAddr = 4
*&aValue2 = 4
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main ()
{
    int a = 4;
    int aValue;

    /* define pointer */
    int * aAddr; // variable identifier is "aAddr", its type is "int *",
                 // a pointer to an integer

    cout << "aAddr = " << aAddr << endl; // it has an initial value set at
                                         // runtime

    /* assign value to pointer using reference operator */
    aAddr = &a; // reference operator &, &a refers to the memory location of a
    cout << "aAddr = " << aAddr << endl;

    /* Use dereference operator and pointer to access value */
    cout << "aValue = " << aValue << endl;
    aValue = *aAddr;
    cout << "aValue = " << aValue << endl;
    cout << "*aAddr = " << *aAddr << endl;

    /*
     * reference operator & and dereference operator * are reverse functions of
     * each other
     */
    cout << "*&aValue = " << *&aValue << endl;

    /* set variable value via pointer */
    *aAddr = 5;
    cout << "a = " << a << endl;



    return 0;
}

/*
-----------------------------------------------------------------------
* Summary: simple C++ program to demonstrate dynamic memory.

* Output:
ptr = 0x8775008
ptr[0] = 0
ptr[2] = 0
*ptr = 0
ptr = 0
memory not allocated
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main ()
{

    cout << "how many integers would you like to allocate? ";
    int size;
    cin >> size;



    int * ptr;

    /* use bad_alloc exception method to deal with dynamic memory allocation
     * failure
     */

    // this will not allocate successfully and cause bad_alloc exception
    //ptr = new int [1000000000000000];

//    ptr = new int [size];
    /***
     * if size is too large, it issues std::bad_alloc error
     * terminate called after throwing an instance of 'std::bad_alloc'
     * what():  std::bad_alloc
     */
//    cout << "ptr = " << ptr << endl;
//    cout << "memory not allocated" << endl;


    /* use nothrow method to deal with dynamic memory allocation failure */

    // this will not allocate successfully and will set ptr to 0
    // ptr = new (nothrow) int [1000000000000000];

    ptr = new (nothrow) int [size];
    if (ptr == 0) {
        cout << "ptr = " << ptr << endl;
        cout << "memory not allocated" << endl;
        return 1;
    };


    /* initialization value */
    cout << "ptr = " << ptr << endl;
    cout << "ptr[0] = " << ptr[0] << endl; // it turns out it's initialized as 0
    cout << "ptr[2] = " << ptr[2] << endl; // it turns out it's initialized as 0
    cout << "*ptr = " << *ptr << endl;



    /**
     * delete operator
     **/
    int * ptr1;
    ptr1 = new (nothrow) int [10];
    cout << "ptr1 = " << ptr1 << endl;
    delete [] ptr1;
    cout << "ptr1 = " << ptr1 << endl;

    int * ptr2;
    ptr2 = new (nothrow) int;
    cout << "ptr2 = " << ptr2 << endl;
    delete ptr2;
    cout << "ptr2 = " << ptr2 << endl;

    return 0;
}

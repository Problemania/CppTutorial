/*
-----------------------------------------------------------------------
* Summary: simple C++ program to demonstrate arrays and pointers.

* Output:
1, 2, 3, 4, 5,
-----------------------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main ()
{
    int numbers[5];
    int * p;
    p = numbers;  // array variable identifier is essentially a pointer
    *p = 1;       // set the first element of the array to 10
    p++;  *p = 2; // increment the pointer, set the second element to 2
    p = &numbers[2];  *p = 3; // use reference operator with array variable
    p = numbers + 3;  *p = 4; // use array variable and offset
    p = numbers;  *(p+4) = 5; // use pointer and offset
    for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
    return 0;
}

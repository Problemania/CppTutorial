/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating function template.

* Output:
5
5.4
5
5.4

4
3.1
4
3.1
3.1



-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

template <class T>
T myMax (T c1, T c2)
{
    T t;
    t = (c1  > c2)? c1 : c2;
    return t;
}


template <class T1, class T2>
T1 myMin (T1 o1, T2 o2)
{
    T1 result;
    result = (o1  < o2)? o1 : o2;
    return result;
}

int main ()
{
    int i1 = 4, i2 = 5, imax, imin;
    double d1 = 3.1, d2 = 5.4, dmax, dmin;
    imax = myMax<int>(i1, i2);
    dmax = myMax<double>(d1, d2);
    int max1 = myMax(i1, i2);    // compiler can automatically determine the
                                 // type for myMax based on type of arguments
    double max2 = myMax(d1, d2);
//    double max3 = myMax(i1, d1); // invalid: no compatible template
    cout << imax << endl;
    cout << dmax << endl;
    cout << max1 << endl;
    cout << max2 << endl;
//    cout << max3 << endl;

    imin = myMin<int>(i1, i2);
    dmin = myMin<double>(d1, d2);
    int min1 = myMin(i1, i2);
    double min2 = myMin(d1, d2);
    double min3 = myMin(d1, i1);
    cout << endl;
    cout << imin << endl;
    cout << dmin << endl;
    cout << min1 << endl;
    cout << min2 << endl;
    cout << min3 << endl;

    return 0;
}

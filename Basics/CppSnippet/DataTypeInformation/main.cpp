/*
--------------------------------------------------------------------------------
* Summary: list information of C++ data types for the current platform.


* Summary of C++ data types

--------------------------------------------------------------------------------
*/
#include <limits>
#include <iostream>
#include <iomanip>

using namespace std;

/*
--------------------------------------------------------------------------------
* Use std:numeric_limits
* Reference: http://www.cplusplus.com/reference/std/limits/numeric_limits
--------------------------------------------------------------------------------
*/


template <class DataType>
int getDataTypeInfo(const DataType& x)
{
    int w = 30;

    cout << boolalpha;
    cout << setw(w) << "min(): " << setw(w) << numeric_limits<DataType>::min() << endl; // casting it to int is necessary for numeric_limits<char>::min()
    cout << setw(w) << "max(): " << setw(w) << numeric_limits<DataType>::max() << endl; // casting it to unsigned is necessary for numeric_limits<char>::max()
    cout << setw(w) << "min() casted as int: " << setw(w) << (int) numeric_limits<DataType>::min() << endl; // casting it to int is necessary for numeric_limits<char>::min()
    cout << setw(w) << "max() casted as unsigned: " << setw(w) << (unsigned) numeric_limits<DataType>::max() << endl; // casting it to unsigned is necessary for numeric_limits<char>::max()
    cout << setw(w) << "digits: " << setw(w) << numeric_limits<DataType>::digits << endl;
    cout << setw(w) << "digits10: " << setw(w) << numeric_limits<DataType>::digits10 << endl;
    cout << setw(w) << "is_signed: " << setw(w) << numeric_limits<DataType>::is_signed << endl;
    cout << setw(w) << "is_integer: " << setw(w) << numeric_limits<DataType>::is_integer << endl;
    cout << setw(w) << "is_exact: " << setw(w) << numeric_limits<DataType>::is_exact << endl;
    cout << setw(w) << "radix: " << setw(w) << numeric_limits<DataType>::radix << endl;
    cout << setw(w) << "epsilon(): " << setw(w) << numeric_limits<DataType>::epsilon() << endl;
    cout << setw(w) << "round_error(): " << setw(w) << numeric_limits<DataType>::round_error() << endl;
    cout << setw(w) << "min_exponent: " << setw(w) << numeric_limits<DataType>::min_exponent << endl;
    cout << setw(w) << "min_exponent10: " << setw(w) << numeric_limits<DataType>::min_exponent10 << endl;
    cout << setw(w) << "max_exponent: " << setw(w) << numeric_limits<DataType>::max_exponent << endl;
    cout << setw(w) << "max_exponent10: " << setw(w) << numeric_limits<DataType>::max_exponent10 << endl;
    cout << setw(w) << "has_infinity: " << setw(w) << numeric_limits<DataType>::has_infinity << endl;
    cout << setw(w) << "has_quiet_NaN: " << setw(w) << numeric_limits<DataType>::has_quiet_NaN << endl;
    cout << setw(w) << "has_signaling_NaN: " << setw(w) << numeric_limits<DataType>::has_signaling_NaN << endl;
    cout << setw(w) << "has_denorm: " << setw(w) << numeric_limits<DataType>::has_denorm << endl;
    cout << setw(w) << "has_denorm_loss: " << setw(w) << numeric_limits<DataType>::has_denorm_loss << endl;
    cout << setw(w) << "infinity(): " << setw(w) << numeric_limits<DataType>::infinity() << endl;
    cout << setw(w) << "denorm_min(): " << setw(w) << numeric_limits<DataType>::denorm_min() << endl;
    cout << setw(w) << "is_iec559: " << setw(w) << numeric_limits<DataType>::is_iec559 << endl;
    cout << setw(w) << "is_bounded: " << setw(w) << numeric_limits<DataType>::is_bounded << endl;
    cout << setw(w) << "is_modulo: " << setw(w) << numeric_limits<DataType>::is_modulo << endl;
    cout << setw(w) << "traps: " << setw(w) << numeric_limits<DataType>::traps << endl;
    cout << setw(w) << "tinyness_before: " << setw(w) << numeric_limits<DataType>::tinyness_before << endl;
    cout << setw(w) << "round_style: " << setw(w) << numeric_limits<DataType>::round_style << endl;
    cout << "----------------------------------------------------" << endl << endl;
    return 0;
}

int main () {
    char xChar = 'x';

    signed int xInt = 0; // this is perhaps equivalent to signed long int
    signed short int xShortInt = 123;
    signed long int xLongInt = 12345678;

    // unsigned xUnsigned = 1234; // this is essentially unsigned short int
    unsigned int xIntUnsigned = 0; // this is perhaps equivalent to unsigned long int
    unsigned short int xShortIntUnsigned = 123;
    unsigned long int xLongIntUnsigned = 12345678;

    float xFloat = 1.234;
    double xDouble = 1.234;
    long double xLongDouble = 1.2345678;

    bool xBool = false;
    wchar_t xWchar_t = 'x';

    std::string xString = "Hello World!";


    cout << "int" << endl;
    getDataTypeInfo(xInt);

    cout << "short int" << endl;
    getDataTypeInfo(xShortInt);

    cout << "long int" << endl;
    getDataTypeInfo(xLongInt);

    cout << "float" << endl;
    getDataTypeInfo(xFloat);

    cout << "double" << endl;
    getDataTypeInfo(xDouble);

    cout << "long double" << endl;
    getDataTypeInfo(xLongDouble);

    cout << "unsigned int" << endl;
    getDataTypeInfo(xIntUnsigned);

    cout << "unsigned short int" << endl;
    getDataTypeInfo(xShortIntUnsigned);

    cout << "unsigned long int" << endl;
    getDataTypeInfo(xLongIntUnsigned);

    cout << "char" << endl;
    getDataTypeInfo(xChar);

    cout << "wchar_t" << endl;
    getDataTypeInfo(xWchar_t);

    cout << "bool" << endl;
    getDataTypeInfo(xBool);

    //	cout << "string" << endl; // this doesn't work as numeric_limits doesn't have definition for std::string
    //	getDataTypeInfo(xString);

    cout << "END!" << endl;
}

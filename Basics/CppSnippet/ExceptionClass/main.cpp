/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating a customized class handling
exceptions inheriting standard class std:exception.

* Output:
my exception occurred!
after try-catch block

-----------------------------------------------------------------------
*/

#include <iostream>
#include <exception>
using namespace std;

class myException: public exception
{
public:
    virtual const char * what() const throw(){
        return "my exception occurred!";
    }
} myExceptionObj;


int main ()
{
    try {
        throw myExceptionObj;
    }
    catch (myException& e) {
        cout << e.what() << endl;
    };
    cout << "after try-catch block" << endl;
    return 0;
}

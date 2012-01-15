/*
-----------------------------------------------------------------------
* Summary: simple C++ program

* Output:

-----------------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
    struct person {
      int id;
      string name;
    };

    person * ptr;

    person p;

    ptr = &p;

    string inputStr;
    stringstream ss;
    cout << "enter name: ";
    getline(cin, inputStr);
    ss << inputStr;
    ss >> ptr -> name;

//    cout << "enter name: ";
//    cin >> ptr -> name;

    cout << "ptr -> name = " << ptr -> name << endl;

}

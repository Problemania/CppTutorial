/*
-----------------------------------------------------------------------
* Summary: simple C++ program

* Output:

-----------------------------------------------------------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ofstream file;
    file.open("./file.txt");
    file << "write text to file" << endl;
    file.close();
    return 0;
}

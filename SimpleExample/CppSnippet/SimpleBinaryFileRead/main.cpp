/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating binary file reading using
read.

* Output:

-----------------------------------------------------------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ifstream::pos_type size;
    char * memblock;
    ifstream inputfile ("./file.txt", ios::in | ios::binary | ios::ate);
    if (inputfile.is_open()) {
        size = inputfile.tellg();
        memblock = new char[size];
        inputfile.seekg(0, ios::beg);
        inputfile.read(memblock, size);
        inputfile.close();
        cout << "file read into memory" << endl;
    } else {
        cout << "file can't be open!" << endl;
    }
    return 0;
}



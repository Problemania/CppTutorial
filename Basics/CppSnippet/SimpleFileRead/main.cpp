/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating file reading using getline.

* Output:

-----------------------------------------------------------------------
*/

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    string line;
    ifstream inputfile ("./file.txt");
    if (inputfile.is_open()) {
        while(inputfile.good()){
            getline(inputfile, line);
            cout << line << endl;
        };
        inputfile.close();
    } else {
        cout << "file can't be open!" << endl;
    }
    return 0;
}

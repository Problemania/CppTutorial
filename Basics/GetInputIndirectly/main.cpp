/*
-----------------------------------------------------------------------
Summary: "Hello world" program for C++.
-----------------------------------------------------------------------
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main ()
{
	cout << "Input a number: ";
	string inputStr;
	cin >> inputStr; // extract a string from standard input stream
	int num;
	stringstream(inputStr) >> num; // convert input string to stringstream, extract a number from string stream
	cout << "The number input is: " << num << endl;
	return 0;
}

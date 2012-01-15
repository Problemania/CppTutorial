/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating character sequence.


* Output:
f
r


foobar
Enter a string: foobarbar
foobarbar
foobarbar
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main ()
{
	// define and access elements of character sequence
	char charSequence1 [10] = {'f', 'o', 'o', 'b', 'a', 'r', '\0'};

	cout << charSequence1[0] << endl; // output: f
	cout << charSequence1[5] << endl; // output: r
	cout << charSequence1[6] << endl; // output: (invisible)
	cout << charSequence1[7] << endl; // output: (invisible)

	// initialize character sequence using string
	char charSequence2[] = "foobar";

	// insert character sequence to standard output stream
	cout << charSequence2 << endl;

	// extract character sequence from standard input stream
	char charSequence3 [10];
	cout<< "Enter a string: ";
	cin >> charSequence3;
	cout << charSequence3 << endl;

	// convert character array to string
	string str;
	str = charSequence3;
	cout << str << endl;

	return 0;
}

/*
-----------------------------------------------------------------------
* Summary: a simple C++ program to demonstrate the usage of parameters
passed by reference.

* Expected output:

a = 1
b = 2
c = 3
a = 1
b = 1
c = 2

* a is passed by a copy of its value, so although the copy of value is
changed in function foobar, a itself is not changed.

b and c are passed by reference, so the changes made to them in function
foobar directly affect b and c and is not block by the scope of function
foobar.

* Passing variable by reference is a way to let a function return
multiple values.
-----------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

void foobar(int x0, int& x1, int& x2)
{
	x0 = 2*x0;
	x1 = x0++;
	x2 = x0--;

}

int main ()
{
	int a = 1;
	int b = 2;
	int c = 3;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	foobar(a, b, c);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	return 0;
}

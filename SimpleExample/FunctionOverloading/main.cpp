/*
-----------------------------------------------------------------------
Summary: simple C++ program demonstrating function overloading.
-----------------------------------------------------------------------
*/

#include <iostream>
#include <cmath>
using namespace std;

float f (int a, int b) {
	return (a + b);
}

float f (float a, float b) {
	return (round(a + b));
}

int main ()
{
	int int1 = 1;
	int int2 = 2;
	float float1 = 1.2;
	float float2 = 1.4;
    cout << f(int1, int2) << endl;      // output: 3
    cout << f(float1, float2) << endl;  // output: 2
    // cout << f(int1, float2) << endl; // has ambiguity and causes compile error
	return 0;
}

/*
-----------------------------------------------------------------------
* Summary: simple C++ program demonstrating class inheritance.

* Output:
big apple
-----------------------------------------------------------------------
*/

#include <iostream>
#include <string>
using namespace std;


class Fruit
{
    string name;
public:
    void setName(string n){ name = n;};
    string getName () {return name;}
};

class Apple: public Fruit
{
    float weight;
public:
    int getWeight(){return weight;}
};

int main ()
{
    Apple a;
    a.setName("big apple");
    cout << a.getName() << endl;
    return 0;
}

#include <iostream>
using namespace std;
int &returnvalue(int &x)
{
    cout << "x =" << x
         << "the address of x is :"
         << &x << endl;
    return x;
}
int main()
{
    int a = 25;
    int &b = returnvalue(a);
    cout << "a=" << a
         << "the address of a is :"
         << &a << endl;
    cout << "b=" << b
         << "the address of b is :"
         << &b << endl;
    return 0;
}
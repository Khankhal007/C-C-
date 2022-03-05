#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    float y = 5.5;
    char ch = 'A';

    y = x + y;
    x = x + y;

    cout << "\n y :" << y;
    cout << "\n x :" << x;

    ch = x + ch;
    cout << "\n ch " << (int)ch;
    return 0;
}
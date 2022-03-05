#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "\n enter a:";
    cin >> a;
    cout << "\n enter b:";
    cin >> b;
    cout << "\n enter c:";
    cin >> c;

    if (a > b)
    {
        cout << "\n a is largest" << a;
    }
    else if (b > c)
    {
        cout << "\n b is largest" << b;
    }
    else
    {
        cout << "\n c is largest" << c;
    }
}
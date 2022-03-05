#include <iostream>
using namespace std;
int main()
{
    char a, b;

    cout << "\n enter alphabet :";
    cin >> a;

    if (a <= 90)
    

    
    {
        a = a + 32;
        cout << a;
    }
    else
    {
        a = a - 32;
        cout << a;
    }
}
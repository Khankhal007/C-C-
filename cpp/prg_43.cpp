#include <iostream>
using namespace std;
class simint
{
    float x,pri,rad,mon;

public:
    simint(float val)
    {
        x = pri * rad * mon / 100;
        cout << "\n simplt interest is :" << x;
    }
    int simint()
    {
        return x;
    }
};
int main()
{
    int pri, rad, mon;
    cout << "\n enter your pri... :";
    cin >> pri;
    cout << "\n enter your rad... :";
    cin >> rad;
    cout << "\n enter your mon... :";
    cin >> mon;

    simint c1(pri), c2(rad), c3(mon);
}
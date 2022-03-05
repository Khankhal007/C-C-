#include <iostream>
using namespace std;
int charge60(float unit)
{
    float amount;
    amount = (unit * 0.60)+50;
    return amount;
}
int charge80(float unit)
{
    float amount;
    amount = ((unit - 100) * 0.8) + (100 * 0.6)+50;
    return amount;
}
int charge90(float unit)
{
    float amount, a;
    a = ((unit - 300) * 0.9) + (160) + (60) + 50;
    if (a < 300)
    {
        return a;
    }
    else
    {
        a = a * 1.15;
        return a;
    }
}
int main()
{
    float amount, unit, a, b;
    cout << "\n enter unit :";
    cin >> unit;

    if (unit <= 100)
    {
        cout << "\n charge on 60unit :" << charge60(unit);
    }
    else if (unit <= 200)
    {
        cout << "\n charge on 80unit :" << charge80(unit);
    }
    else
    {
        cout << "\n charge on 90unit :" << charge90(unit);
    }
}
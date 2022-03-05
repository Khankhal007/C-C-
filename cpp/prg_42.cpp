#include <iostream>
using namespace std;
class aoc
{
    float x;

public:
    aoc(float val)
    {
        x = 3.14 * val * val;
        cout << "\n area of circle is :" << x;
    }
};
int main()
{
    int radius;
    cout << "\n enter your radius :";
    cin >> radius;

    aoc c1(radius);
}
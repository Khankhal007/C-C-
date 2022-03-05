#include <iostream>
using namespace std;
class aoc
{
    int x;
    public:
    void set(int val)
    {
        x = 3.14 * val * val;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    int radius;
    cout << "\n enter your radius :";
    cin >> radius;
    aoc obj1;
    obj1.set(radius);
    cout << "\n area of circle is :" << obj1.get();
}

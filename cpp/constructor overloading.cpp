#include <iostream>
using namespace std;
class sum
{
public:
    sum(int x, int y)
    {
        cout << "int x+y : " << x + y << endl;
    }
    sum()
    {
        cout << "\n default con.\n";
    }
    sum(double x, double y)
    {
        cout << "double x+y : " << x + y << endl;
    }
    sum(double x, double y, double z)
    {
        cout << "double x+y+z : " << x + y + z << endl;
    }
};
int main()
{
    sum do1(10, 20), d02(10.5, 20.6), d03(10.5, 20.6, 23.7), d04();
    return 0;
}
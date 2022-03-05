#include <iostream>
using namespace std;
class Test
{
public:
    void sum(int x, int y)
    {
        cout << "int x+y : " << x + y << endl;
    }
    int sum(int x, int y, int z)
    {
        return (x + y + z);
    }
    void sum(double x, double y)
    {
        cout << "double x+y : " << x + y << endl;
    }
    void sum(double x, double y, double z)
    {
        cout << "double x+y+z : " << x + y + z << endl;
    }
};
int main()
{
    Test t;
    t.sum(10, 20);
    t.sum(34.5, 56.54);
    t.sum(23.32, 45.65, 67.45);
    cout << "sum : " << t.sum(12, 23, 34);
    return 0;
}
#include <iostream>
using namespace std;
class simint
{
    int x;

public:
    void set(int p, int r, int n)
    {
        x = p * r * n / 100;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    int a, b, c;
    cout << "\n enter of value is a :";
    cin >> a;
    cout << "\n enter of value is b :";
    cin >> b;
    cout << "\n enter of value is c :";
    cin >> c;
    simint obj1;
    obj1.set(a, b, c);
    cout << "\n simple interest is :" << obj1.get();
    
}
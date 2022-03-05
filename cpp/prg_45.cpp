#include <iostream>
using namespace std;
class myclass
{
    int x;
    public:
    void set(int val)
    {
        x=val;
    }
    int get()
    {
        return x*2;
    }
};
int main()
{
    int z;
    myclass obj1,obj2;
    cout<<"\n object 1:";
    obj1.set(10);
    cout<<"\n x :"<<obj1.get();
    cout<<"\n object 2:";
    obj2.set(20);
    z=obj2.get();
    cout<<"\n z :"<<z;


}
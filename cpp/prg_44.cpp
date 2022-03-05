#include<iostream>
using namespace std;
class Test
{
    int x;
    public:
    Test(int n)
    {
        x=n;
        cout<<"\n constructor called....."<<n;
    }
    ~Test()
    {
        cout<<"\t destructor called......"<<x;
    }    
};
int main()
{
    Test t1(1),t2(2),t3(3);
}


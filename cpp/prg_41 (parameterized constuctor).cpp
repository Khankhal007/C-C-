#include<iostream>
using namespace std;
class Contest
{
    public:
    Contest(int x)
    {
        cout<<"\n constuctor called...."<<x;
    }
};
int main()
{
    Contest c1(1),c2(2);
}
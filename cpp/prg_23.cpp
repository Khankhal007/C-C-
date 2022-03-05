#include<iostream>
using namespace std;
int square(int x)
{
    return x*x;
}
int quib(int h)
{
    return h*h*h;
}
int divided(int g)
{
    return g/2;
}
int main()
{
    int n=10,x=20,a=50;
    cout<<"\n befor square";
    cout<<"\n\t my square return :"<<square(n);
    cout<<"\n\t my quib return :"<<quib(x);
    cout<<"\n\t my divided return :"<<divided(a);
    cout<<"\n after square";
}

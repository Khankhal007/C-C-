#include<iostream>
using namespace std;
int recur(int n)
{
    cout<<"\n winding :"<<n;
    if(n<3)
    {
        recur(n+1);
    }
    cout<<"\n\t unwinding :"<<n;
}
int main()
{
    recur(1);
}
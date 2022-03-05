#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"\n enter age :";
    cin>>age;
    if(age>=18)
    {
        cout<<"\n person available for vote";
    }
    else
    {
        cout<<"\n person not available for vote";
    }
    return 0;
}
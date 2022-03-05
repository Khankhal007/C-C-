#include<iostream>
using namespace std;
int main()
{
    int hra,da,ba;
    cout<<"\n enter ba :";
    cin>>ba;

    if(ba<=5000)
    {
        hra=ba*0.8;
        da=ba*0.20;
        cout<<"\n hra :"<<hra<<"\n da :"<<da;
    }
    else if(ba<=10000)
    {
        hra=ba*0.12;
        da=ba*0.30;
        cout<<"\n hra :"<<hra<<"\n da :"<<da;
    }
    else if(ba<=15000)
    {
        hra=ba*0.15;
        da=ba*0.40;
        cout<<"\n hra :"<<hra<<"\n da :"<<da;
    }
    else
    {
        hra=ba*0.20;
        da=ba*0.50;
        cout<<"\n hra :"<<hra<<"\n da :"<<da;
    }
}
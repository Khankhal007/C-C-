#include<iostream>
using namespace std;
int  main()
{
    int i=1;
    label:
        cout<<"\n\t"<<i++;
        if(i<=10)
        goto label;
}
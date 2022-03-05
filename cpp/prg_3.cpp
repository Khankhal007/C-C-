#include<iostream>
using namespace std;
int main()
{
    int maths,physics,chemistry,total;
    float per;
    cout<<"\n enter marks of maths:";
    cin>>maths; 
    cout<<"\n enter marks of physics:";
    cin>>physics; 
    cout<<"\n enter marks of chemistry:";
    cin>>chemistry; 

    total =maths+physics+chemistry;
    cout<<"\n total ="<<total;

    per=total/3;
    cout<<"\n per ="<<per;
    
}
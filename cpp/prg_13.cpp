#include<iostream>
using namespace std;
int main()
{
    char ch,a,e,i,o,u;
    cout<<"\n enter ch:";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
    {
        cout<<"\n alphabet is vowel";
    }
    else
    {
        cout<<"\n alphabet is consonant";
    }

}
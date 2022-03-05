#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"\n enter our choice :";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"\n monday";
        break;
        case 2:
            cout<<"\n tuesday";
        break;
        case 3:
            cout<<"\n wendesday";
        break;
        case 4:
            cout<<"\n thursday";
        break;
        case 5:
            cout<<"\n friday";
        break;
        default:
            cout<<"\n saturday";
        break;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int maths, sci, eng, total, grade;
    float per;

    cout << "\n enter marks of maths :";
    cin >> maths;

    cout << "\n enter marks of sci : ";
    cin >> sci;

    cout << "\n enter marks of eng : ";
    cin >> eng;

    if (maths <= 35 || sci <= 35 || eng <= 35)
    {
        cout << "\nBetter luck next time";
    }
    else
    {
        total = maths + sci + eng;
        cout << "\n total = " << total;

        per = total / 3;
        cout << "\n per = " << per;

        if (per >= 75)
        {
            cout << "\n grade A :";
        }
        else if (per >= 60)
        {
            cout << "\n grade B :";
        }
        else if (per >= 45)
        {
            cout << "\n grade C :";
        }
        else if (per >= 35)
        {
            cout << "\n grade D :";
        }
        else
        {
            cout << "\n batter luck next time";
        }
    }
}

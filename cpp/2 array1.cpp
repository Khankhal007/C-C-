#include <iostream>
#define n 5
using namespace std;
int main()
{
    int a[n][n], i,j, key, index = -1;
    cout << "\n Enter element of array" << n;
    for (i = 0; i < n; i++)
        cin >> a[i][j];
    cout << "Enter element for delete :";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        for(j=0;j<n;j++)
        {
            if (a[i][j] == key)
            {
             index = i;
             break;
            }
        }
    }
    if (index = -1)
    {
        for (i = index; i < n - 1; i++)
        {
            for(j=0;j<n-1;j++)
            {
                a[i][j] = a[i + 1][j+1];
            }
        }
        cout << "\n------new array is----";
        for (i = 0; i < n - 1; i++)
            cout << "\n a" << i << a[i];
    }
    else
    {
        cout << "\n element not found" << key;
    }
}
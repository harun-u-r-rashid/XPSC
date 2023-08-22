
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ; cin >> t;
    while(t--)
    {
        int b, c, h;
        cin >> b >> c >> h;

        int a = c + h;

        if(a >= b)
        {
            cout << 2 * b - 1 << "\n";
        }
        else
        {
            cout << 2 * a + 1 << "\n";
        }

    }

    return 0;
}

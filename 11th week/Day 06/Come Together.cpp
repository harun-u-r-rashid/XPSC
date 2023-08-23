

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        int xa, ya;
        cin >> xa >> ya;
        int xb, yb;
        cin >> xb >> yb;
        int xc, yc;
        cin >> xc >> yc;

        long long ans1 = 0, ans2 = 0;

        if((xb >= xa && xc >= xa) || (xb <= xa && xc <= xa))
        {
            ans1 = min(abs(xb - xa), abs(xc - xa));
        }

        if((yb >= ya && yc >= ya) || (yb <= ya && yc <= ya))
        {
            ans2 = min(abs(yb - ya), abs(yc - ya));
        }





        long long ans = ans1 + ans2 + 1;
        cout << ans << "\n";

    }

    return 0;
}

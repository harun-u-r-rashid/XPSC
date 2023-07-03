//Problem link: https://codeforces.com/contest/1714/problem/A


#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int n,h,m;
        cin>>n>>h>>m;

        int ans = INT_MAX;

        for(int i=1; i<=n; i++)
        {
            int HH,MM;
            cin>>HH>>MM;
            int cnt = 0;
            int hh = h;
            int mm = m;
            while(true)
            {
                if(hh == HH && mm == MM)
                {
                    break;
                }
                cnt++;
                mm++;
                if(mm==60)
                {
                    mm = 0;
                    hh++;
                    if(hh == 24)
                    {
                        hh = 0;
                    }
                }
            }
            ans = min(ans, cnt);
        }
        cout<<ans/60<<" "<<ans%60<<"\n";

}
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
       solve();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        int a,b; cin>> a>>b;



        int mx = max(a,b);

        int ans = (a^mx) + (b^mx);

        cout<<ans<<"\n";
    }

    return 0;
}

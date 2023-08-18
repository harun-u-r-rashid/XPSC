
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t; cin >> t;


    while(t--)
    {
        ll n, k; cin >> n >> k;

        ll ans = 1;
        ll mod = 1e9 + 7;


        while(k)
        {
            if(k%2)
            {
                ans = (ans * n) % mod;
                k--;
            }
            else
            {
                n = (n * n) % mod;
                k/=2;

            }
        }

        cout<<ans%mod<<"\n";

    }

    return 0;
}

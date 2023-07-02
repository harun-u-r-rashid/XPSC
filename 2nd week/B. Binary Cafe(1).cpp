#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n,k; cin>>n>>k;
        k = min((int)k, 61);

        ll x = pow(2,k);
        ll y = n+1;

        ll ans = min(x,y);
        cout<<ans<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n,m; cin>>n>>m;

        int ans = 6*6*m;

        if(ans >= n) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}

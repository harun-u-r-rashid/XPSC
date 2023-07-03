//Problem link: https://www.codechef.com/problems/CS2023_PON

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,b; cin>>n>>b;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int ans = -1;

    for(int i=0; i<n; i++)
    {
        if((arr[i]&b) == b)
        {
           ans &= arr[i];

        }
    }

    if(ans == b) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";


}

int main()
{
    int test; cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

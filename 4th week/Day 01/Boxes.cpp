//Problem link: https://www.codechef.com/problems/BOX95

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n; cin>>n;
    long long arr[n];

    long long mx = 0;

    for(long long i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]&1) arr[i]--;
    }
    map<long long, long long>mp;

    for(long long i=0; i<n; i++)
    {
        long long ans = 0;
        while(arr[i]>1)
        {
            ans++;
            arr[i]/=2;
        }
        mp[ans]++;
        mx = max(mx,ans);
    }
    long long Ans = ceil(mp[mx]*1.0/2);
    cout<<Ans<<"\n";
}
int main()
{
long long test; cin>>test;
while(test--)
{
    solve();
}
    return 0;
}

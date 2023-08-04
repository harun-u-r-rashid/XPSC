
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    map<int, long long>mp;



    while(n--)
    {
        int a,b; cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }

    long long sum = 0, ans = 0;

    for(auto it : mp)
    {
        sum+=it.second;
        ans = max(ans, sum);
        //cout<<ans<<" ";
    }

    //cout<<endl;

    cout<<ans<<endl;
    return 0;
}

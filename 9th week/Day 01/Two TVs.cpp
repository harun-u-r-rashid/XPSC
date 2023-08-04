
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    map<int, long long>mp;

    while(n--)
    {
        int a,b;
        cin>>a>>b;

        mp[a]++;
        mp[b+1]--;

    }
    long long sum = 0;
    int flag = 0;

    for(auto it:mp)
    {
        sum+=it.second;
        if(sum>2)
        {
            flag = 1;
            break;
        }

    }

    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        vector<int>a(n);

        map<int,int>mp;


        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        vector<int>v;

        for(auto it:mp)
        {
            v.push_back(it.second);
        }

        int ans = *max_element(v.begin(),v.end());

        cout<<ans<<"\n";
    }

    return 0;
}

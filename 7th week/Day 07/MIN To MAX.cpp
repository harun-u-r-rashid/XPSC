
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);

        map<int,int>mp;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        int ans = 0;
        for(auto it : mp)
        {
            ans+=it.second;

        }

        vector<int>v;

        for(auto it:mp)
        {
            if(it.second>1)
            {
                v.push_back(it.second);
            }
        }



        if(v.size() == 0)
            cout<<ans-1<<"\n";
        else
            cout<<ans-v[0]<<"\n";
    }
}

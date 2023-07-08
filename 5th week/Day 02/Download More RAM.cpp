//Problem link: https://codeforces.com/contest/1629/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{


    int test;
    cin>>test;

    while(test--)
    {

        int n,k;
        cin>>n>>k;

        int a[n],b[n];

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];


        vector<pair<int,int>>v;

        for(int i=0; i<n; i++)

        {
            v.push_back({a[i],b[i]});
        }


        sort(v.begin(), v.end());


        int ans = k;

        for(int i=0; i<n; i++)
        {
            if(ans>=v[i].first)

            {
                ans+=v[i].second;
                 //cout<<ans<<"\n";

            }

        }

        cout<<ans<<"\n";
    }

    return 0;
}

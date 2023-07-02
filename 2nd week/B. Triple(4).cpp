//Problem link: https://codeforces.com/problemset/problem/1669/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while (test--)
    {
        int n;
        cin>>n;
        int ans = -1;
        map<int, int>mp;

        for(int j=0; j<n; j++)
        {
            int k;
            cin>>k;
            mp[k]++;

            if(mp[k]>=3)
            {
                ans = k;
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}



















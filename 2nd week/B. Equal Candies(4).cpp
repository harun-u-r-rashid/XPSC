//Problem link: https://codeforces.com/contest/1676/problem/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)

    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
     int ans = 0;
        sort(v.begin(), v.end());
        for(int i=1; i<n; i++)
        {
            ans+= v[i] - v[0];
        }
        cout<<ans<<endl;
    }
}

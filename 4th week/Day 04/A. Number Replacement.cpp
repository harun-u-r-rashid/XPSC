//Problem link: https://codeforces.com/contest/1744/my
#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    string s;
    cin>>s;
    map<int,set<char>>ms;
    for(int i=0; i<n; i++)
    {
        ms[arr[i]].insert(s[i]);
    }

    for(auto a:ms)
    {
        if(a.second.size()>1)
        {
            cout<<"NO"<<"\n";
            return 0;
        }

    }
    cout<<"YES"<<"\n";
    return 0;

}
int main()
{
    long long test;
    cin>>test;

    while(test--)
    {
        solve();
    }

}

//Problem link: https://codeforces.com/contest/1729/problem/C


#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;
    vector<vector<int>>v(26);

    for(int i=0; i<s.size(); i++)

        v[s[i]-'a'].push_back(i+1);

    vector<int>ans;

    if(s[0]<=s[s.size()-1])
    {
        for(int i=s[0]-'a'; i<=s[s.size()-1]-'a'; i++)
        {
            for(auto it:v[i])
                ans.push_back(it);
        }
    }
    else
    {
        for(int i=s[0]-'a'; i>=s[s.size()-1]-'a'; i--)
        {
            for(auto it:v[i])
                ans.push_back(it);
        }
    }

    cout<<abs(s[0]-s[s.size()-1])<<" "<<ans.size()<<"\n";

    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

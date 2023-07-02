//Problem link: https://codeforces.com/contest/1729/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s; cin>>s;
    string result;

    for(int i=0; i<n; i++)
    {
        if((i+2<=n && s[i+2]=='0') && (i+3>=n || s[i+3]!='0'))
        {
            int x = (s[i]-'0')*10 + (s[i+1]-'0');
            result.push_back(x+96);
            i+=2;
        }

        else
        {
            int x = (s[i]-'0');
            result.push_back(x+96);
        }
    }
    cout<<result<<"\n";
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

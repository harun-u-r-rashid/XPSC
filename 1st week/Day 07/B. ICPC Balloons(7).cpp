//problem link: https://codeforces.com/contest/1703/problem/B
//abar dekha lagbe...
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
        string s;
        cin>>s;

        map<char, int>m;
        char ch = 'A';
        for(int i=1; i<=26; i++)
        {
            m.insert({ch,0});
            ch++;
        }
        for(int i=0; i<n; i++)
        {
            for(char j='A'; j<='Z'; j++)
            {
                if(s[i] == j)
                {
                    m[j]++;
                }
            }

        }
        int ans = 0;
        for(auto i:m)
        {
            if(i.second>0)
            {
                ans+=2;
                ans+=i.second - 1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

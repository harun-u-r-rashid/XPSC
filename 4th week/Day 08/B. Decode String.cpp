
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    string ans;

    for(int i=0; i<n; i++)
    {
        if((i+2<=n && s[i+2]=='0') && (i+3>=n || s[i+3]!='0'))
           {
               int number = (s[i]-'0')*10 + (s[i+1]-'0');
           ans.push_back((char)(96+number));
           i+=2;
           }

           else
            {
                int number = (s[i] - '0');
                ans.push_back((char)(96+number));
            }

    }
    cout<<ans<<endl;

}

int main()
{
    int test; cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}

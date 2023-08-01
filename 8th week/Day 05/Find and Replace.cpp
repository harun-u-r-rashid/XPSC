
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n; cin>>n;

        string s; cin>>s;

        string ans = "0";

        for(int i=0; i<n-1; i++)
        {
            if(s[0] == s[i+1])
                ans+='0';
            else
                ans+='1';
        }
        int flag = 0;

        for(int j = 0; j<n-1; j++)
        {
            if(ans[j] == ans[j+1])
            {
                flag = 1;
                break;
            }
        }

          cout<<ans<<endl;


        if(flag) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";


    }

    return 0;
}

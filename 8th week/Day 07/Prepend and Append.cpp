
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;

        string s; cin>>s;
        int ans = 0;
        int nn = n;

        for(int i=0; i<n; i++)
        {

            if(s[i] == s[n-1])
            {
                 n--;
                 break;
            }
              if(s[i]!=s[n-1])
            {
                ans++;
                n--;
            }

        }

        cout<<nn-2*ans<<endl;
    }

    return 0;
}

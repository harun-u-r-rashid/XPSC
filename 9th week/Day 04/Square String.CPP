
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        string s1, s2;

        int n = s.size();

        if(n%2)
        {
            cout<<"NO"<<"\n";
            continue;
        }

        else
        {
            for(int i=0; i<n/2; i++)
            {
                s1.push_back(s[i]);
            }

            for(int i=n/2; i<n; i++)
            {
                s2.push_back(s[i]);
            }
        }


        if(s1 == s2) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}

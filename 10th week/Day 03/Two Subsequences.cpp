
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

        string s1 = s;

        sort(s.begin(), s.end());
        string a,b;

        a.push_back(s[0]);
        char ch = s[0];
        int ans;

        for(int i=0; i<s.size(); i++)
        {
            if(ch == s1[i])
                ans = i;
        }

        for(int i=0; i<s.size(); i++)
        {
            if(ans!=i)
                b.push_back(s1[i]);
        }

        cout<<a<<" "<<b<<"\n";
    }

    return 0;
}

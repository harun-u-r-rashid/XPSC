//Problem link: https://codeforces.com/contest/1702/problem/B


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {

        string s;
        cin>>s;

        int ans = 1;
        set<int>st;

        for(int i=0; i<s.size(); i++)
        {
            st.insert(s[i]);

            if(st.size()>3)
            {
                ans++;
                st.clear();
                st.insert(s[i]);

            }

        }
        cout<<ans<<"\n";

    }

    return 0;
}






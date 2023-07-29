
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
        string ans;

        char ch = s[0];
        int cnt = 1;

        for(int i=1; i<n; i++)
        {
            if(ch == s[i])
            {
                cnt++;
            }
            else
            {

                if(cnt%2)
                {

                    ans.push_back(ch);
                }
                else
                {
                    ans.push_back(ch);
                    ans.push_back(ch);
                }
                ch = s[i];
                cnt = 1;
            }
        }

        if(cnt%2)
        {

            ans.push_back(ch);
        }
        else
        {
            ans.push_back(ch);
            ans.push_back(ch);
        }



        cout<<ans<<"\n";

    }

    return 0;
}

//Problem link: https://codeforces.com/contest/1676/problem/C

/*
#include<bits/stdc++.h>
using namespace std;

int solve(string s1, string s2)
{
    int result = 0;
    int n = s1.size();

    for(int i=0; i<n; i++)
    {
        result+=abs(s1[i] - s2[i]);
    }
    return result;
}
int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n,m; cin>>n>>m;

        string s[n];
        for(int i=0; i<n; i++)
        {
                 cin>>s[i];
        }


        int ans = INT_MAX;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                ans = min(ans,solve(s[i], s[j]));
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n,m; cin>>n>>m;
        string s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        int ans = INT_MAX;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int result = 0;
                int length = s[i].size();
                for(int k=0; k<length; k++)
                {
                    result+= abs(s[i][k] - s[j][k]);
                }
                ans = min(ans,result);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}





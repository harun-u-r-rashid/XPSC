//Problem link: https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0;
    int s,t; cin>>s>>t;

    for(int i=0; i<=100; i++)
    {
        for(int j=0; j<=100; j++)
        {
            for(int k=0; k<=100; k++)
            {
                if(i+j+k<=s && i*j*k<=t)
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}


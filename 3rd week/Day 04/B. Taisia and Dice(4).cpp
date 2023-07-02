//Problem link: https://codeforces.com/contest/1790/problem/B
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,s,r; cin>>n>>s>>r;

    cout<<s-r<<" ";
    if(r%(n-1) == 0)
    {
        for(int i=0; i<n-1; i++)
        {
            cout<<(r/(n-1))<<" ";
        }
    }

    else
    {
        int temp = r%(n-1);

        for(int i=0; i<n-1-temp; i++)
        {
            cout<<r/(n-1)<<" ";
        }
        for(int i=0; i<temp; i++)
        {
            cout<<r/(n-1)+1<<" ";
        }
    }
cout<<"\n";
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




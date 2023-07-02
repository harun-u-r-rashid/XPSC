//Problem link: https://www.codechef.com/problems/SEVENRINGS?tab=statement
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,x; cin>>n>>x;
         int ans = n*x;
        int cnt = 0;
         while(ans>0)
         {
             int temp = ans%10;
             cnt++;
             ans/=10;
         }
         if(cnt == 5) cout<<"YES"<<"\n";
         else cout<<"NO"<<"\n";
    }

    return 0;
}


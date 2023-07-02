//Problem Link: https://www.codechef.com/problems/RIGHTTHERE?tab=statement

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    while(T--)
    {
         int N,X; cin>>N>>X;
         if(N<=X)
         {
             cout<<"YES"<<"\n";
         }
         else
         {
             cout<<"No"<<"\n";
         }
    }
   return 0;
}

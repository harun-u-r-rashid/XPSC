
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;

   while(t--)
   {
       int n; cin>>n;

      int odd = 1;
      int even = 2;

      for(int i=1; i<=n; i++)
      {
          for(int j = 1; j<=n; j++)
          {
              if(even<=n*n)
              {
                  cout<<even<<" ";
                  even+=2;
              }
              else
              {
                  cout<<odd<<" ";
                  odd+=2;
              }
          }

          cout<<endl;
      }
   }

   return 0;
}

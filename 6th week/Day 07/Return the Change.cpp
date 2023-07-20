
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

      int r = n%10;

      if(r>=5)
      {
          cout<<100-(n+(10-r))<<"\n";
      }

      else
      {
          cout<<100-(n-r)<<"\n";
      }
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long>a(n);
        map<long long,long long>mp;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        long long ans = 0;

      for(auto it:mp)
      {
          ans = max(ans, it.second);
      }



      if(ans > 1) cout<<n-ans<<"\n";
      else cout<<n-1<<"\n";

    }

    return 0;
}

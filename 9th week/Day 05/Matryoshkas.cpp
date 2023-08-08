
#include<bits/stdc++.h>
using namespace std;


long long solve()
{
     long long n;
        cin>>n;

        vector<long long>arr(n);
        map<long long, long long>mp;

        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;

        }

        sort(arr.begin(), arr.end());

       long long ans = 0;

        for(long long i=0; i<n; i++)
        {
           long long value =  arr[i];

            if(mp[value] != 0)
            {
                ans++;

                while(mp[value]>0)
                {
                    mp[value]--;
                    value++;
                }
            }
        }
        cout<<ans<<"\n";
    return 0;
}
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
       solve();
    }
    return 0;
}

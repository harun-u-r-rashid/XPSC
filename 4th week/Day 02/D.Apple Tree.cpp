
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin>>test;

    while(test--)
    {
        long long  n;
        cin>>n;
        vector<long long>arr(n);

        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        long long sum=0;
        map<long long,long long>mp;
        for(long long i=n-1; i>=0 ; i--)
        {
            if(mp[arr[i]] == 0) sum++;

            else
                break;
            mp[arr[i]]++;
        }
        cout<<n-sum<<"\n";
    }
    return 0;
}

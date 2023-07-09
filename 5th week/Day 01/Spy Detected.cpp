
//Problem link: https://codeforces.com/contest/1512/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long test; cin>>test;

    while(test--)
    {
        long long n; cin>>n;
        long long arr[n];

        map<long long, long long>mp;
        long long temp_ans = 0;

        for(long long i=1; i<=n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;

            if(mp[arr[i]]>1)
            {
                temp_ans = arr[i];

                //cout<<temp_ans<<"\n";
            }
        }


        for(long long int i=1; i<=n; i++)
        {
            if(arr[i] != temp_ans)
            {
                cout<<i<<"\n";

                break;
            }
        }
    }

    return 0;
}
















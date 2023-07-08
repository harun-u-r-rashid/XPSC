//Problem link: https://codeforces.com/contest/1642/problem/C

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {

        long long n, x;
        cin>>n>>x;
        vector<long long>arr(n);


        for(long long i=0; i<n; i++)
        {
           cin>>arr[i];

        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        map<long, long>m;
        for(long i=0; i<n; i++)
        {
            m[arr[i]]+=1;
        }

        long ans = 0;
        for(int i = n-1; i>=0; i--)
        {
            if(m[arr[i]])
            {

                long long y = x*arr[i];
                if(m[y])
                {
                    m[y]--;
                }
                else
                {
                    ans++;
                }
                m[arr[i]]--;
            }
        }
        cout<<ans<<endl;
    }



    return 0;
}

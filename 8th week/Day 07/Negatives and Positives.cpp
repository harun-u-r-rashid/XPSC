#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<long long>a(n);

        long long sum = 0;
        int neg = 0;

         long long mn = LLONG_MAX;

        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=abs(a[i]);

            if(a[i]<0)
            {
                neg++;

            }

            mn = min(mn, abs(a[i]));
        }

        if(neg%2==0)cout<<sum<<endl;
        else cout<<sum-(2*mn)<<endl;

    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n,q;
    cin>>n>>q;

    vector<long long>a(n);
    vector<long long>f(n);

    for(long long i=0; i<n; i++) cin>>a[i];

    while(q--)
    {
       long long l,r;
        cin>>l>>r;
        f[l-1]++;
        if(r<n)
        {
           f[r]--;
        }

    }

    for(long long i=1; i<n; i++)
    {
        f[i]+=f[i-1];
    }
    sort(a.rbegin(), a.rend());
    sort(f.rbegin(),f.rend());

    long long ans = 0;

    for(long long i=0; i<n; i++)
    {
        ans+=a[i]*f[i];
    }

    cout<<ans<<"\n";

    return 0;

}

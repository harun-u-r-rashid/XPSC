#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long m  = 1e9 + 7;

        int n;
        cin>>n;


        long long  ans = 1;

        for(long long i = (n+n); i>=3; i--)
        {
            ans = ans * i;
            ans = ans % m;
        }

        cout<<ans<<"\n";

    }

    return 0;
}

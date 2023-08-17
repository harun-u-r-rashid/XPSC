
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,k; cin>>n>>k;

        int kk = k%2;
        int nn = n%2;

        if(kk == 0 && nn == 1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";

    }

    return 0;
}

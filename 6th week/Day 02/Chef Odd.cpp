
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        long long n,k; cin>>n>>k;

        long long odd = ((n/2) + (n%2)) - k;

        long long ans = 2*k;

        if(n<ans) cout<<"NO"<<"\n";

        else if(n==ans) cout<<"YES"<<"\n";

        else
        {
            if(odd%2==0) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }

    }

    return 0;
}

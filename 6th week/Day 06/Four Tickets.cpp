
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n; cin>>n;

        int ans = 4*n;

        if(ans<=1000) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t; while(t--)
    {
        int a,b,c; cin>>a>>b>>c;

        int ans = a+b+c;

        if(ans%3) cout<<1<<"\n";
        else cout<<0<<"\n";
    }

    return 0;
}

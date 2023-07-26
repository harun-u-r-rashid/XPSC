
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t; while(t--)
    {
        int x,y; cin>>x>>y;

        int ans = 5*x;

        if(ans>=y) cout<<"YES"<<"\n";

        else cout<<"NO"<<"\n";
    }

    return 0;
}

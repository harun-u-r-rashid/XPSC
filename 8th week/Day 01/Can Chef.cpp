
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t; while(t--)
    {
        int a,b; cin>>a>>b;

        int ans = a*15;

        if(ans>=2*b) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }

    return 0;
}
